#include "declarations.h"
Mat drawCircles(Mat img, vector<KeyPoint> keypoints)
{
	for(int i = 0; i < (int)keypoints.size(); i++)
	{
		circle(img, keypoints.at(i).pt, keypoints.at(i).size, Scalar(0,0,255));
	}
	return img;
}