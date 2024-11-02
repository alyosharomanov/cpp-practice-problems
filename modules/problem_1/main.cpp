//
// Created by alyosharomanov on 10/28/2024.
//

#include "main.h"
#include <vector>
#include <stack>
#include <algorithm>

using std::vector;
using std::stack;
using std::max;

/**
 * Calculate the largest rectangle area that can be formed using the heights.
 * @param heights Vector of heights.
 * @return The maximum area of a rectangle that can be formed.
 */
int Solution::largestRectangleArea(const vector<int> &heights) {
    stack<int> indices;
    int maxArea = 0;
    const int size = heights.size();

    for (int i = 0; i <= size; i++) {
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
            maxArea = max(maxArea, width * height);
        }
        // save the index of the current height.
        indices.push(i);
    }
    return maxArea;
}

/**
 * Leetcode 85: Maximal Rectangle
 * https://leetcode.com/problems/maximal-rectangle/description/
 * Given a rows x cols binary matrix filled with 0's and 1's,
 * find the largest rectangle containing only 1's and return its area.
 *
 * @param matrix The binary matrix filled with 0's and 1's.
 * @return The area of the largest rectangle containing only 1's.
 */
int Solution::maximalRectangle(const vector<vector<char> > &matrix) {
    if (matrix.empty()) return 0; // matrix is empty, return 0.

    const int rows = matrix.size();
    const int cols = matrix[0].size();

    int maxArea = 0; // max area of the rectangle found so far.
    vector<int> heights(cols, 0); // the max heights for each row.

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
        maxArea = max(maxArea, largestRectangleArea(heights));
    }
    return maxArea;
}
