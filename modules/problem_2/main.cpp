//
// Created by alyosharomanov on 1/20/2025.
//

#include "main.h"

#include <map>
#include <string>
#include <tuple>

bool Solution::RecursiveSolve(const std::string& s1, const std::string& s2) {
    const size_t size = s1.size();

    // base case
    if (s1 == s2)
        return true;

    // the key will be a tuple of input and output string
    const std::tuple<std::string, std::string> key = std::make_tuple(s1, s2);
    if (intermediate_result_map.find(key) != intermediate_result_map.end())
        return intermediate_result_map[key];

    // iterate all split points
    for (size_t i = 1; i < size; i++) {
        // create substrings for s1 and s2
        std::string s1Left = s1.substr(0, i);
        std::string s1Right = s1.substr(i, size);
        std::string s2Left = s2.substr(0, i);
        std::string s2Right = s2.substr(i, size);

        // no swap
        if (RecursiveSolve(s1Left, s2Left) && RecursiveSolve(s1Right, s2Right))
            return intermediate_result_map[key] = true;

        // create substrings for s2 with swapped parts
        std::string s2RightSwapped = s2.substr(size - i, i);
        std::string s2LeftSwapped = s2.substr(0, size - i);

        // with swap
        if (RecursiveSolve(s1Left, s2RightSwapped) && RecursiveSolve(s1Right, s2LeftSwapped))
            return intermediate_result_map[key] = true;
    }

    // otherwise, return false
    return intermediate_result_map[key] = false;
}

bool Solution::IsScramble(const std::string& s1, const std::string& s2) {
    if (s1.size() != s2.size())
        return false;

    return RecursiveSolve(s1, s2);
}