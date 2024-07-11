#include <fmt/core.h>
#include <opencv2/opencv.hpp>
#include <iostream>

int main(int argc, char *argv[]) {
  fmt::print("Hello, world!\n");
  std::cout << cv::getBuildInformation();
  return 0;
}
