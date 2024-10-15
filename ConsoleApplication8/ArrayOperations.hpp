#ifndef ARRAYOPERATIONS_HPP
#define ARRAYOPERATIONS_HPP

#include <memory>  // For smart pointers

std::unique_ptr<int[]> createArray(int size);
void inputArray(std::unique_ptr<int[]>& arr, int size);
int calculateSum(const std::unique_ptr<int[]>& arr, int size);

#endif
