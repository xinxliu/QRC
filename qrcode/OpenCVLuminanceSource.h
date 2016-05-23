#ifndef __OPENCVBITMAPSOURCE_H__
#define __OPENCVBITMAPSOURCE_H__

#include <zxing/LuminanceSource.h>
#include <opencv2/opencv.hpp>

using namespace zxing;

class OpenCVLuminanceSource : public LuminanceSource{
public:
    OpenCVLuminanceSource(cv::Mat &image);
    ~OpenCVLuminanceSource();
    int getWidth() const;   
    int getHeight() const;
    ArrayRef<char> getRow(int y, ArrayRef<char> row) const; //Seek Zxing Array.h for ArrayRef def
    ArrayRef<char> getMatrix() const;
private:
	cv::Mat image_;
};

#endif
