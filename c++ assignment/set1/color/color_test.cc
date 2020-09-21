#include "color.h"
TEST(Color,default){
Color a1;
EXPECT_EQ(0,a1.getred());
EXPECT_EQ(0,a1.getgreen());
EXPECT_EQ(0,a1.getblue());
}

TEST(Color,parameterized){
Color a1(0,1,2);
EXPECT_EQ(0,a1.getred());
EXPECT_EQ(1,a1.getgreen());
EXPECT_EQ(2,a1.getblue());
}
TEST(Color,parameterizedTest){
Color a1(0);
EXPECT_EQ(0,a1.getred());
}
TEST(Color,forEnum){
Color a1(0,1,2);
EXPECT_EQ(0,a1.getred());
EXPECT_EQ(1,a1.getgreen());
EXPECT_EQ(2,a1.getblue());
}
