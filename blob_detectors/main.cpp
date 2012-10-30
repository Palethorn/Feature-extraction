#include "declarations.h"

int main()
{
	Mat src1, src2;
	/// Load source image and convert it to gray
	src1 = imread("zgrada.jpg", 1);
	/// Create a window and a trackbar
	//namedWindow(source_window, CV_WINDOW_AUTOSIZE);
	//createTrackbar("Threshold: ", source_window, &thresh, max_thresh, cornerHarris_demo);
	//imshow(source_window, src);

	sift(src1, "sift");
	waitKey(0);
	return(0);
}