#include "declarations.h"
#include <string.h>
void harris(int thresh, Mat img, char *window_name)
{
	char *filename_cornerless = "harris_cornerless.jpg", *filename_final = "harris_final.jpg";
	Mat dst, dst_norm, dst_norm_scaled;
	Mat img_gray;
	cvtColor(img, img_gray, CV_BGR2GRAY);
	DWORD t1, t2, t;
	dst = Mat::zeros(img.size(), CV_32FC1);

	/// Detector parameters
	int blockSize = 2;
	int count = 0;
	int apertureSize = 3;
	double k = 0.04;

	/// Detecting corners
	t1 = ticks;
	cornerHarris(img_gray, dst, blockSize, apertureSize, k, BORDER_DEFAULT);
	t2 = ticks;
	t = t2 - t1;
	/// Normalizing
	normalize(dst, dst_norm, 0, 255, NORM_MINMAX, CV_32FC1, Mat());
	convertScaleAbs(dst_norm, dst_norm_scaled);
	imwrite(filename_cornerless, dst_norm_scaled);
	/// Drawing a circle around corners
	for(int j = 0; j < dst_norm.rows ; j++)
	{ for(int i = 0; i < dst_norm.cols; i++)
	{
		if((int) dst_norm.at<float>(j,i) > thresh)
		{
			circle(img, Point(i, j), 5,  Scalar(0, 0, 255), 1, 8, 0);
			count++;
		}
	}
	}
	/// Showing the result
	cout << "Harris features detected: " << count << endl << "Time to execute: " << t << endl;
	imwrite(filename_final, img);
	namedWindow(window_name, CV_WINDOW_AUTOSIZE);
	imshow(window_name, img);
}