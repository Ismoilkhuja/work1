#include <opencv/cv.h>
#include <opencv2/highgui/highgui.hpp>
int main(){
    cv::Mat image(cv::Size(256, 256), CV_8UC3);
    for (int x=0; x<image.size().width; ++x){   
	 for (int y=0; y<image.size().height; ++y){
	    image.at<cv::Vec3b>(y,x)[0]=x;	//Blue
	    image.at<cv::Vec3b>(y,x)[1]=y;	//Green
	    image.at<cv::Vec3b>(y,x)[2]=(x+y)/2;	//Green
	}
    }
    cv::imshow("image", image);
    cv::waitKey(0);
    return 0;
}