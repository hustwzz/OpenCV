#include<opencv2\opencv.hpp>
#include<iostream>
using namespace cv;
using namespace std;

int main(int argc, char** argv)
{
	/*IplImage *src;
	src = cvLoadImage("C:\\Users\\husters\\Desktop\\test.PNG",0);
	cvNamedWindow("logo.jpg", 1);
	cvShowImage("logo.jpg", src);

	cvWaitKey(0);
	cvDestroyWindow("logo.jpg");
	cvReleaseImage(&src);*/
	Vec3b vec(150, 0,0);
	Mat mat1(600, 800,CV_8UC1);
	Mat mat2(600, 800, CV_8UC3);
	//for (int i = 0; i < mat1.rows; ++i)
	//{
	//	for (int j = 0; j < mat1.cols; ++j)
	//	{
	//		mat1.at<uchar>(i, j) = (i + j) % 255;
	//	}
	//}
	//for (int i = 0; i < mat2.rows; ++i)
	//{
	//	for (int j = 0; j < mat2.cols; ++j)
	//	{
	//		vec[0] = i % 255;
	//		vec[1] = j % 255;
	//		vec[2] = 0;
	//		mat2.at<Vec3b>(i, j) = vec;
	//	}
	//}

	MatIterator_<uchar> matIt1,matIt2;
	MatIterator_<Vec3b> matIt3,matIt4;

	for (matIt1 = mat1.begin<uchar>(), matIt2 = mat1.end<uchar>(); matIt1 != matIt2; ++matIt1)
	{
		*matIt1 = rand() % 255;
	}
	
	imshow("qwer", mat1);
	//imshow("qwerr",mat2);
	cvWaitKey();
	getchar();
	return 0;
}
