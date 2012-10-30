#include "declarations.h"
void fast(int thresh, Mat img, char * window_name)
{
	Mat img_conv, dst;
	char *filename = "fast_features.jpg";
	int i = 0;
	vector<KeyPoint> keyPoints;
	cvtColor(img, img_conv, CV_BGR2GRAY);
	FAST(img_conv, keyPoints, thresh, true);
	//drawKeypoints(img, keyPoints, dst, Scalar(255, 0, 0));
	for(i = 0; i < (int)keyPoints.size(); i++)
	{
		//printf("%d, %d\n", (int)keyPoints.at(i).pt.x, (int)keyPoints.at(i).pt.y);
		circle(img, keyPoints.at(i).pt, keyPoints.at(i).size,  Scalar(0, 0, 255), 1, 8, 0);
	}
	imwrite(filename, img);
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);
	imshow(window_name, img);
}