#include <iostream>
#include <opencv2/imgcodecs.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
using namespace std;
using namespace cv;

//Variables
string file_path = "C:\\Users\\Alexy\\Desktop\\social_fbi\\lormant_pls_edit.jpeg" ;
string hit_path = "C:\\Users\\Alexy\\Desktop\\social_fbi\\hit_me_daddy.png";
string display_name = "Hit Image";
Mat img;
Mat img_grey;
const int imsize = 256;

//Function Definitions
 Mat improtect(string init_path, string save_path);
 void fourier();
 int readPixel(Mat I, int row, int column);
 void printMatrix(int a);

int main() {

}

//Non-main Functions

static Mat improtect(string init_path, string save_path){
	//Show original image
	Mat img = imread(init_path, IMREAD_UNCHANGED);
	//imshow("Original Image",img);
	
	//Convert to Greyscale
	cvtColor(img, img_grey, COLOR_BGR2GRAY);
	
	//Save and show Greyscale copy
	imwrite(save_path,img_grey);
	img = imread(save_path, IMREAD_UNCHANGED);
	//imshow(display_name, img_grey);
	int k = waitKey(0);
	return img;
}

static void fourier(){

}