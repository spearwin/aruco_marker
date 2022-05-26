#include <opencv2/aruco.hpp>
// #include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>

int main() {
    cv::Mat markerImage_1;
    cv::Mat markerImage_2;
    cv::Mat markerImage_3;
    cv::Mat markerImage_4;

    cv::Ptr<cv::aruco::Dictionary> dictionary = cv::aruco::getPredefinedDictionary(cv::aruco::DICT_4X4_50);

    cv::aruco::drawMarker(dictionary, 0, 300, markerImage_1, 1);
    cv::aruco::drawMarker(dictionary, 1, 300, markerImage_2, 1);
    cv::aruco::drawMarker(dictionary, 2, 300, markerImage_3, 1);
    cv::aruco::drawMarker(dictionary, 3, 300, markerImage_4, 1);

    // cv::imshow("marker", markerImage);
    // cv::waitKey();
    cv::imwrite("marker1.png", markerImage_1);
    cv::imwrite("marker2.png", markerImage_2);
    cv::imwrite("marker3.png", markerImage_3);
    cv::imwrite("marker4.png", markerImage_4);
}