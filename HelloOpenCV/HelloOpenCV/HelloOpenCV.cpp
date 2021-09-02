// HelloOpenCV.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <opencv.hpp>

using namespace std;
using namespace cv;

int main()
{   
	 string windowName = "HelloWorld";

     Mat image = imread("C:\\opencv-2.4.11\\opencv\\build\\doc\\opencv-logo.png");  // Read Image
	 namedWindow(windowName,CV_WINDOW_AUTOSIZE);
     imshow(windowName, image);              // Show Image

     waitKey(0);                             // Pause, Wait Input Any Key   
     return 0;
 }

