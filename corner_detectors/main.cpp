#include "declarations.h"
int main(int argc, char** argv)
{
	Mat src1, src2;

	src1 = imread("mask/mask1.jpg");
	src2 = src1.clone();
	fast(60, src1, "FAST", "fast.jpg");
	harris(150, src2, "Harris", "harris.jpg");

	src1 = imread("mask/mask2.jpg");
	src2 = src1.clone();
	fast(60, src1, "FAST translation", "fast_translation.jpg");
	harris(150, src2, "Harris translation", "harris_translation.jpg");

	src1 = imread("mask/mask3.jpg");
	src2 = src1.clone();
	fast(60, src1, "FAST rotation", "fast_rotation.jpg");
	harris(150, src2, "Harris rotation", "harris_rotation.jpg");

	src1 = imread("mask/mask4.jpg");
	src2 = src1.clone();
	fast(60, src1, "FAST zoom", "fast_zoom.jpg");
	harris(150, src2, "Harris zoom", "harris_zoom.jpg");

	waitKey(0);
	return(0);
}