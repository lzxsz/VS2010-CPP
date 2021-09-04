/*
 * helloworld_libevent.c
 *
 * This is a libEvent Hello World example.
 * Code from: https://www.cnblogs.com/toosuo/archive/2012/08/25/2655659.html
 */

#include <stdio.h>

#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#include <winsock2.h>

#include <event.h>
#include <evhttp.h>

/* The response function of HTTP root request */
void root_handler(struct evhttp_request *req, void *arg)
{
    struct evbuffer *buf = evbuffer_new();
    if(!buf){
        puts("failed to create response buffer");
        return;
    }

    evbuffer_add_printf(buf, "Hello: %s\n", evhttp_request_uri(req));
    evhttp_send_reply(req, HTTP_OK, "OK", buf);
}

/* The response function of HTTP generic request */
void generic_handler(struct evhttp_request *req, void *arg)
{
    struct evbuffer *buf = evbuffer_new();
    if(!buf){
        puts("failed to create response buffer");
        return;
    }

    evbuffer_add_printf(buf, "Requested: %s\n", evhttp_request_uri(req));
    evhttp_send_reply(req, HTTP_OK, "OK", buf);
}

/* Main function */
int main(int argc, wchar_t* argv[])
{
	struct evhttp *httpd;

	WSADATA wsaData;
	DWORD Ret;
	if ((Ret = WSAStartup(MAKEWORD(2, 2), &wsaData)) != 0) { /* Windows Sockets Asynchronous Startup */
		printf("WSAStartup failed with error %d\n", Ret);
		return -1;
	}

    event_init(); //Init libEvent

    /* httpd = evhttp_start("0.0.0.0", 18505); */
	httpd = evhttp_start("127.0.0.1", 18505); /* Start HTTP server with IP and Port. */
    if(!httpd){
		return 1;
	}

    evhttp_set_cb(httpd, "/", root_handler, NULL);  /* Set the response function of HTTP root request */
    evhttp_set_gencb(httpd, generic_handler, NULL); /* Set the response function of HTTP generic request */

	printf("httpd server start OK!\n");

    event_dispatch(); /*  Event Loop. Wait! */
    evhttp_free(httpd); /* Free HTTP server */

	WSACleanup(); /* Windows Sockets Asynchronous Cleanup */
    return 0;
}
