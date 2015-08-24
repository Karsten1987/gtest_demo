#include <iostream>
#include <gtest/gtest.h>

/**
 * Interface to test
 */
#include <gtest_demo/gtest_demo.h>

TEST( GTestDemo, InitName )
{
  const std::string expected = "simple app name";
  GTestDemo demo_app(expected);

  EXPECT_EQ(expected, demo_app.name());
}

TEST( GTestDemo, InitValue )
{
  GTestDemo demo_app("foo");

  EXPECT_EQ(0, demo_app.value());
}

int main(int argc, char **argv)
{
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
