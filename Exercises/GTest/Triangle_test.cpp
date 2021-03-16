#include "triangle.h" 
#include <gtest/gtest.h>

namespace {

TEST(TriangleTest, Invalidsides) {
    EXPECT EQ(-1, Typeof Triangle(-10, 20, 30));
    EXPECT_EQ(-1, Typeof Triangle(10, -20, 30));
    EXPECT_EQ(-1, Typeof Triangle(3, 4, -8));

} 
TEST(TriangleTest, NonFormation) {
    EXPECT_EQ(0, TypeOfTriangle(10, 20, 30));
    EXPECT_EQ(0, Type Of Triangle(3, 4, 8)); 
}

TEST(TriangleTest, Equivalateral) {
     EXPECT_EQ(1, TypeofTriangle(10, 10, 10)); 
     EXPECT_EQ(1, TypeofTriangle(5, 5, 5)); 
}

TEST(TriangleTest, Isosceles) {
    EXPECT_EQ(2, TypeofTriangle(10, 9, 15));
    EXPECT_EQ(2, Typeof Triangle(15, 10, 10));
    EXPECT_EQ(2, TypeofTriangle(10, 15, 10));
} 
TEST(TriangleTest, Scalan) {
    EXPECT_EQ(3, Types Of Triangle(3, 4, 5));
    EXPECT_EQ(3, TypeofTriangle(10, 12, 15));
    EXPECT_EQ(3, Typeof Triangle(10, 25, 18));
}
}