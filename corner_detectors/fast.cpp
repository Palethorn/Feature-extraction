#include "declarations.h"
void fast(int thresh, Mat img, char * window_name)
{
	Mat img_conv, dst;
	DWORD t1, t2, t;
	char *filename = "fast_features.jpg";
	int i = 0;
	vector<KeyPoint> keyPoints;
	cvtColor(img, img_conv, CV_BGR2GRAY);
	t1 = ticks;
	FAST(img_conv, keyPoints, thresh, true);
	t2 = ticks;
	t = t2 - t1;
	cout << "FAST features detected: " << (int)keyPoints.size() << endl << "Time to execute: " << t << endl;
	for(i = 0; i < (int)keyPoints.size(); i++)
	{
		circle(img, keyPoints.at(i).pt, keyPoints.at(i).size,  Scalar(0, 0, 255), 1, 8, 0);
	}
	imwrite(filename, img);
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);
	imshow(window_name, img);
}