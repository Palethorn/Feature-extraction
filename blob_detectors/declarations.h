#ifndef DECLARATIONS_H
#define DECLARATIONS_H
	#include "opencv2/highgui/highgui.hpp"
	#include "opencv\cv.h"
	#include <opencv2\nonfree\features2d.hpp>
	#include "opencv2/features2d/features2d.hpp"
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>
	#include <opencv2\opencv.hpp>

	using namespace std;
	using namespace cv;

	void sift(Mat img, char *window_name);

#endif