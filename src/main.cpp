#include <iostream>

/**
 * include a dummy class
 */
#include <gtest_demo/gtest_demo.h>

/**
 * this is a demo main for a simple quick gtest example
 */
int main(int argc, char** argv)
{
  GTestDemo demo_app("demo app");

  std::cout << demo_app << std::endl;
  return 0;
}
