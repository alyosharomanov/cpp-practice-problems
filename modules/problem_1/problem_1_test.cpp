//
// Created by alyosharomanov on 10/29/2024.
//

#include <gtest/gtest.h>

#include <vector>

#include "main.h"

TEST(SolutionTest, MaximalRectangleTest1) {
    Solution sol;
    const std::vector<std::vector<char> > matrix1 = {{'1', '0', '1', '0', '0'},
                                                     {'1', '0', '1', '1', '1'},
                                                     {'1', '1', '1', '1', '1'},
                                                     {'1', '0', '0', '1', '0'}};
    EXPECT_EQ(sol.MaximalRectangle(matrix1), 6);
}

TEST(SolutionTest, MaximalRectangleTest2) {
    Solution sol;
    const std::vector<std::vector<char> > matrix1 = {{'1', '0', '1', '0', '0'},
                                                     {'0', '0', '1', '0', '1'},
                                                     {'0', '1', '1', '1', '1'},
                                                     {'1', '0', '0', '1', '0'}};
    EXPECT_EQ(sol.MaximalRectangle(matrix1), 4);
}

TEST(SolutionTest, MaximalRectangleTest3) {
    Solution sol;
    const std::vector<std::vector<char> > matrix2 = {{'0', '1'}, {'1', '0'}};
    EXPECT_EQ(sol.MaximalRectangle(matrix2), 1);
}

TEST(SolutionTest, MaximalRectangleTest4) {
    Solution sol;
    const std::vector<std::vector<char> > matrix3 = {{'1'}};
    EXPECT_EQ(sol.MaximalRectangle(matrix3), 1);
}

TEST(SolutionTest, MaximalRectangleTest5) {
    Solution sol;
    const std::vector<std::vector<char> > matrix4 = {{'0'}};
    EXPECT_EQ(sol.MaximalRectangle(matrix4), 0);
}

TEST(SolutionTest, LargestRectangleAreaTest1) {
    Solution sol;
    const std::vector<int> heights1 = {2, 1, 5, 6, 2, 3};
    EXPECT_EQ(sol.LargestRectangleArea(heights1), 10);
}
