#include "declarations.h"

void sift(Mat img, char* window_name, char *filename)
{
	cout << filename << endl;
	SIFT sift(0, 3, 0.04, 10, 1.6);
	Mat gray;
	DWORD t1, t2, t;
	cvtColor(img, gray, CV_BGR2GRAY);
	vector<cv::KeyPoint> keypoints;
	t1 = ticks;
	sift.detect(gray, keypoints);
	t2 = ticks;
	t = t2 - t1;
	cout << "SIFT features detected: " << (int)keypoints.size() << endl << "Time to execute: " << t << endl;
	img = drawCircles(img, keypoints);
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);
	imshow(window_name, img);
	imwrite(filename, img);
}