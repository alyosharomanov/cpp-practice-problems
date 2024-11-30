//
// Created by alyosharomanov on 10/28/2024.
//
#pragma once

#include <vector>

class Solution {
public:
    // Calculate the largest rectangle area that can be formed using a vector of heights.
    // If we imagine the heights as a histogram, the largest rectangle area is the maximum.
    // Example: For heights {2,1,5,6,2,3}, largest rectangle area is 10.
    //
    // @param heights Vector of heights.
    // @return The maximum area of a rectangle that can be formed.
    static int MaximalRectangle(const std::vector<std::vector<char> >& matrix);

    // Calculate the largest rectangle containing only 1's in a binary matrix.
    // Uses a histogram approach where each row is treated as histogram heights.
    //
    // Time Complexity: O(n^3), Space Complexity: O(n)
    // @param matrix The binary matrix filled with 0's and 1's.
    // @return The area of the largest rectangle containing only 1's.
    static int LargestRectangleArea(const std::vector<int>& heights);
};