#include "c-echo.h"

#include "gtest/gtest.h"

TEST(EchoTest, HelloWorld) {
    char* test_val[3]; test_val[0] = "./c-echo"; test_val[1] = "hello"; test_val[2] = "world";
    EXPECT_EQ("hello world", echo(3,test_val));
}

TEST(EchoTest, EmptyString) {
    char* test_val[1]; test_val[0] = "./c-echo";
    EXPECT_EQ("", echo(1,test_val));
}

TEST(EchoTest, StringAndNumber) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "I"; test_val[2] = "am"; test_val[3] = "27";
    EXPECT_EQ("I am 27", echo(4, test_val)); 
}

TEST(EchoTest, StringAndSpace) {
    char* test_val[4]; test_val[0] = "./c-echo"; test_val[1] = "I"; test_val[2] = "am"; test_val[3] = "";
    EXPECT_EQ("I am ", echo(4, test_val));
}

TEST(EchoTest, StringAndChar) {
    char* test_val[2]; test_val[0] = "./c-echo"; test_val[1] = "I'm";
    EXPECT_EQ("I'm", echo(2, test_val));
}

int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}

