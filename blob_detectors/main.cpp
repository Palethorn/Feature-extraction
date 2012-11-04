#include "declarations.h"

int main()
{
	Mat src1, src2, src3;
	/// Load source image and convert it to gray
	src1 = imread("cells.jpg");
	src2 = imread("cells.jpg");
	src3 = imread("cells.jpg");
	/// Create a window and a trackbar
	//namedWindow(source_window, CV_WINDOW_AUTOSIZE);
	//createTrackbar("Threshold: ", source_window, &thresh, max_thresh, cornerHarris_demo);
	//imshow(source_window, src);

	sift(src1, "SIFT");
	mser(src2, "MSER");
	surf(src3, "SURF");
	waitKey(0);
	return(0);
}