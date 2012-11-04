#include "declarations.h"
void surf(Mat img, char *window_name)
{
	SURF surf(800);
	vector<KeyPoint> keypoints;
	Mat gray;
	DWORD t1, t2, t;
	cvtColor(img, gray, CV_BGR2GRAY);
	t1 = ticks;
	surf.detect(gray, keypoints);
	t2 = ticks;
	t = t2 - t1;
	cout << "SURF features detected: " << (int)keypoints.size() << endl << "Time to execute: " << t << endl;
	img = drawCircles(img, keypoints);
	namedWindow(window_name);
	imshow(window_name, img);
	imwrite("surf.jpg", img);
}