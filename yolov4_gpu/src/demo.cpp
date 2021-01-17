
/*
* Company:	Synthesis
* Author: 	Chen
* Date:	2018/06/04
*/

#include <stdio.h>
#include <signal.h>

#include "detector.h"

using namespace cv;


bool signal_recieved = false;


void sig_handler(int signo) {
	if (signo == SIGINT) {
		printf("received SIGINT\n");
		signal_recieved = true;
	}
}


int main(int argc, char** argv)
{
	std::string model_file;
	std::string weights_file;
	std::string image_path;
	if (4 == argc) {
		model_file = argv[1];
		weights_file = argv[2];
		image_path = argv[3];
	}
	else {
		LOG(ERROR) << "Input error: please input ./xx [model_path] [weights_path] [image_path]";
		return -1;
	}
	int gpu_id = 0;
	//init network
	Detector detector = Detector(model_file, weights_file, gpu_id);

	//load image with opencv
	Mat img = imread(image_path);
	LOG(INFO) << "read img ok  ";

	//detect
	float thresh = 0.3;
	std::vector<bbox_t> bbox_vec = detector.detect(img, thresh);
	LOG(INFO) << "length of bbos is  " << bbox_vec.size();

	//show detection results
	for (int i = 0; i<bbox_vec.size(); ++i) {
		bbox_t b = bbox_vec[i];

		int left = b.x;
		int right = b.x + b.w;
		int top = b.y;
		int bot = b.y + b.h;
		rectangle(img, Point(left, top), Point(right, bot), Scalar(0, 0, 255), 3, 8, 0);
		LOG(INFO) << " label = " << b.obj_id
			<< " prob = " << b.prob
			<< " left = " << left
			<< " right = " << right
			<< " top = " << top
			<< " bot = " << bot;
	}

	////////show with opencv
	namedWindow("show", CV_WINDOW_AUTOSIZE);
	imshow("show", img);
	waitKey(0);

	LOG(INFO) << "done.";
	return 0;
}

