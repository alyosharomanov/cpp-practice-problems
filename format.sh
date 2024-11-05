#!/bin/bash

# clang-format
extensions=("cpp" "h")
for ext in "${extensions[@]}"; do
    find . -name "*.${ext}" -exec clang-format -i {} \;
done
echo "clang-format done."

# bazel-format
buildifier -r .
echo "buildifier formatting done."