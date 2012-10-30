#include "declarations.h"

void sift(Mat img, char* window_name)
{
	SIFT sift;
	vector<cv::KeyPoint> keypoints;
	sift.detect(img, keypoints);
	for(int i = 0; i < (int)keypoints.size(); i++)
	{
		circle(img, keypoints.at(i).pt, keypoints.at(i).size, Scalar(0,0,255));
	}
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);
	imshow(window_name, img);
}