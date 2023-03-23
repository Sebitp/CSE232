 // WRITE YOUR CODE HERE
#pragma once

#include <vector>

std::vector<int>::const_iterator FindSmallestIndexRange(const std::vector<int>& vec, int start, int end);

template<typename Iterator>
void DoubleIteratorRange(Iterator begin, Iterator end)
{
    for (auto iter = begin; iter != end; ++iter) {
        *iter *= 2;
    }
};