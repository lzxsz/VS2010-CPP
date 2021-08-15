// HelloWorld.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"


// AppWizard has created this HelloWorld application.
/*
int _tmain(int argc, _TCHAR* argv[])
{
	return 0;
}
*/

//---------------------------------------------------------------------
// I modified this HelloWorld application.

#include <stdio.h>   //printf()
#include <stdlib.h>  //system()

int main(int argc, char* argv[])
{
	printf("Hello World!\n");

	system("pause");  //pause, any key continue.
	return 0;
}