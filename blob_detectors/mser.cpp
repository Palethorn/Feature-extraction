#include "declarations.h"

void mser(Mat img, char * window_name)
{
	MSER mser(5,60, 14400, .25, .4, 200, 1.01, 0.003, 5);
	vector<KeyPoint> keypoints;
	Mat gray;
	DWORD t1, t2, t;
	cvtColor(img, gray, CV_BGR2GRAY);
	t1 = ticks;
	mser.detect(gray, keypoints);
	t2 = ticks;
	t = t2 - t1;
	cout << "MSER features detected: " << (int)keypoints.size() << endl << "Time to execute: " << t << endl;
	img = drawCircles(img, keypoints);
	namedWindow(window_name);
	imshow(window_name, img);
	imwrite("mser.jpg", img);
}