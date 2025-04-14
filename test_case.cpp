#include<gtest/gtest.h>
#include "myTest.h"

TEST(AddTest, PositiveNumbers) {
    EXPECT_EQ(addF(1, 2), 3);
}

TEST(SecondTest , NegativeNumber){
    EXPECT_EQ(addF(-1, -2), -3);
}

TEST(ThirdTest , classTest){
    student s1;
    s1.setAge(20);
    EXPECT_EQ(s1.showAge(), 20);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}   