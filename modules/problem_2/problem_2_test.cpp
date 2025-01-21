//
// Created by alyosharomanov on 1/20/2025.
//

#include <gtest/gtest.h>

#include "main.h"

TEST(SolutionTest, IsScrambleTest0) {
    Solution sol;
    EXPECT_FALSE(sol.IsScramble("teststring", "wronglength"));
}

TEST(SolutionTest, IsScrambleTest1) {
    Solution sol;
    EXPECT_TRUE(sol.IsScramble("great", "rgeat"));
}

TEST(SolutionTest, IsScrambleTest2) {
    Solution sol;
    EXPECT_FALSE(sol.IsScramble("abcde", "caebd"));
}

TEST(SolutionTest, IsScrambleTest3) {
    Solution sol;
    EXPECT_TRUE(sol.IsScramble("a", "a"));
}

TEST(SolutionTest, IsScrambleTest4) {
    Solution sol;
    EXPECT_TRUE(sol.IsScramble("abc", "bca"));
}

TEST(SolutionTest, IsScrambleTest5) {
    Solution sol;
    EXPECT_TRUE(sol.IsScramble("abcd", "dbca"));
}

TEST(SolutionTest, IsScrambleTest6) {
    Solution sol;
    EXPECT_TRUE(sol.IsScramble("aa", "aa"));
}

TEST(SolutionTest, IsScrambleTest7) {
    Solution sol;
    EXPECT_FALSE(sol.IsScramble("abc", "def"));
}

TEST(SolutionTest, IsScrambleTest8) {
    Solution sol;
    EXPECT_FALSE(sol.IsScramble("eebaacbcbcadaaedceaaacadccd", "eadcaacabaddaceacbceaabeccd"));
}

TEST(SolutionTest, IsScrambleTest9) {
    Solution sol;
    EXPECT_TRUE(sol.IsScramble("abbdacadcddaacaaadcabbcaddabdb", "cbbaddacdddaacbbaaadaadcbcabda"));
}