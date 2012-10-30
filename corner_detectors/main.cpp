#include "declarations.h"
int main(int argc, char** argv)
{
	Mat src1, src2;
	/// Load source image and convert it to gray
	src1 = imread("zgrada.jpg", 1);
	src2 = imread("zgrada.jpg", 1);
	/// Create a window and a trackbar
	//namedWindow(source_window, CV_WINDOW_AUTOSIZE);
	//createTrackbar("Threshold: ", source_window, &thresh, max_thresh, cornerHarris_demo);
	//imshow(source_window, src);

	harris(180, src1, "harris");
	fast(30, src2, "fast");
	waitKey(0);
	return(0);
}