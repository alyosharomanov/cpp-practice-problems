//
// Created by alyosharomanov on 1/20/2025.
//

#pragma once

#include <map>
#include <string>

class Solution {
public:
    // LeetCode 87 Scramble String
    // Check if the string s1 is a scrambled string of string s2.
    // Uses a recursive approach with memoization to determine if the given conditions hold true.
    //
    // Time Complexity: O(n!) because of the recursive call
    // Space Complexity: O(n^2) because we store intermediate results in a map
    //
    // @param s1 The original string.
    // @param s2 The scrambled string to check against.
    // @return True if s2 is a scrambled string of s1, otherwise false.
    bool IsScramble(const std::string& s1, const std::string& s2);

private:
    // Recursively solve the scramble string problem and use a map to store intermediate steps
    //
    // @param s1 The original string.
    // @param s2 The scrambled string to check against.
    // @return True if t is s2 scrambled version of s1, otherwise false.
    bool RecursiveSolve(const std::string& s1, const std::string& s2);

    // map to store the results intermediate steps
    std::map<std::tuple<std::string, std::string>, bool> mpp;;
};
