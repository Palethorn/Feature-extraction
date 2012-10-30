#ifndef DECLARATIONS_H
	#define DECLARATIONS_H
	#include "opencv2/highgui/highgui.hpp"
	#include "opencv2/imgproc/imgproc.hpp"
	#include "opencv2/features2d/features2d.hpp"
	#include <iostream>
	#include <stdio.h>
	#include <stdlib.h>

	using namespace cv;
	using namespace std;

	/// Function header
	void harris(int thresh, Mat img, char *window_name);
	void fast(int thresh, Mat img, char *window_name);
#endif