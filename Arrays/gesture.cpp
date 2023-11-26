#include <iostream>
#include <Windows.h>
#include <opencv2/opencv.hpp>

using namespace cv;

int main()
{
    VideoCapture cap(0);
    if (!cap.isOpened())
    {
        std::cout << "Failed to open camera" << std::endl;
        return -1;
    }

    namedWindow("Gesture Control", WINDOW_NORMAL);
    setWindowProperty("Gesture Control", WND_PROP_FULLSCREEN, WINDOW_FULLSCREEN);

    while (true)
    {
        Mat frame;
        cap >> frame;
        if (frame.empty())
            break;

        flip(frame, frame, 1);
        rectangle(frame, Point(100, 100), Point(300, 300), Scalar(0, 255, 0), 2);
        rectangle(frame, Point(400, 100), Point(600, 300), Scalar(255, 0, 0), 2);

        imshow("Gesture Control", frame);

        int gesture = waitKey(10);
        if (gesture == 27)  // Press ESC to exit
            break;

        if (gesture == '1')
        {
            std::cout << "Decrease volume" << std::endl;
            // Code to decrease system volume
        }
        else if (gesture == '2')
        {
            std::cout << "Increase volume" << std::endl;
            // Code to increase system volume
        }
    }

    destroyAllWindows();
    return 0;
}
