//
// Created by pardusumsu on 05.10.2024.
//

#ifndef CSRT_TRACKER_CPP_TRACKER_H
#define CSRT_TRACKER_CPP_TRACKER_H

#include "iostream"

#include <opencv2/core/utility.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/tracking.hpp>
#include <opencv2/videoio.hpp>
#include <opencv2/highgui.hpp>

class tracker {
public:
    tracker();
    ~tracker();
    void processFrame();
private:
    cv::Mat frame_show;
    cv::Mat frame_prc;
    cv::Rect roi;
    cv::Ptr<cv::TrackerCSRT> tracker_csrt = cv::TrackerCSRT::create();

    bool init = false;
    bool paused = false;
    bool roiSelected = false;
};


#endif //CSRT_TRACKER_CPP_TRACKER_H
