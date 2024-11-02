//
// Created by alyosharomanov on 10/29/2024.
//

#include "main.h"
#include <gtest/gtest.h>
#include <vector>

TEST(SolutionTest, test1) {
    Solution sol;
    const std::vector<std::vector<char> > matrix1 = {
        {'1', '0', '1', '0', '0'},
        {'1', '0', '1', '1', '1'},
        {'1', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };
    EXPECT_EQ(sol.maximalRectangle(matrix1), 6);
}

TEST(SolutionTest, test2) {
    Solution sol;
    const std::vector<std::vector<char> > matrix1 = {
        {'1', '0', '1', '0', '0'},
        {'0', '0', '1', '0', '1'},
        {'0', '1', '1', '1', '1'},
        {'1', '0', '0', '1', '0'}
    };
    EXPECT_EQ(sol.maximalRectangle(matrix1), 4);
}

TEST(SolutionTest, test3) {
    Solution sol;
    const std::vector<std::vector<char> > matrix2 = {
        {'0', '1'},
        {'1', '0'}
    };
    EXPECT_EQ(sol.maximalRectangle(matrix2), 1);
}

TEST(SolutionTest, test4) {
    Solution sol;
    const std::vector<std::vector<char> > matrix3 = {
        {'1'}
    };
    EXPECT_EQ(sol.maximalRectangle(matrix3), 1);
}

TEST(SolutionTest, test5) {
    Solution sol;
    const std::vector<std::vector<char> > matrix4 = {
        {'0'}
    };
    EXPECT_EQ(sol.maximalRectangle(matrix4), 0);
}
