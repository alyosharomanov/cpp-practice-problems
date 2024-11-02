//
// Created by alyosharomanov on 10/28/2024.
//
#pragma once

#include <vector>

class Solution {
public:
    static int maximalRectangle(const std::vector<std::vector<char> > &matrix);

private:
    static int largestRectangleArea(const std::vector<int> &heights);
};