//
// Created by alyosharomanov on 10/28/2024.
//

#include "main.h"

#include <algorithm>
#include <stack>
#include <vector>

int Solution::LargestRectangleArea(const std::vector<int>& heights) {
    std::stack<int> indices;
    int maxArea = 0;
    const size_t size = heights.size();

    for (size_t i = 0; i <= size; i++) {
        // do while the current height is shorter than the top of the stack.
        while (!indices.empty() && (i == size || heights[indices.top()] >= heights[i])) {
            // height of the rectangle.
            int height = heights[indices.top()];
            indices.pop();

            // width of the rectangle.
            int width;
            if (indices.empty()) {
                width = i;
            } else {
                width = i - indices.top() - 1;
            }

            // update the max area.
            maxArea = std::max(maxArea, width * height);
        }
        // save the index of the current height.
        indices.push(i);
    }
    return maxArea;
}

int Solution::MaximalRectangle(const std::vector<std::vector<char> >& matrix) {
    if (matrix.empty()) return 0;

    const size_t rows = matrix.size();
    const size_t cols = matrix[0].size();

    int maxArea = 0; // max area of the rectangle found so far.
    std::vector<int> heights(cols, 0); // the max heights for each row.

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            // add to height if 1, reset if 0.
            if (matrix[i][j] == '1') {
                heights[j] += 1;
            } else if (matrix[i][j] == '0') {
                heights[j] = 0;
            } else {
                return -1; // invalid input.
            }
        }
        // calculate the max area of the rectangle for the current row.
        maxArea = std::max(maxArea, LargestRectangleArea(heights));
    }
    return maxArea;
}
