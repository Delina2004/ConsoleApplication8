#include "ArrayOperations.hpp"
#include <iostream>
using namespace std;

std::unique_ptr<int[]> createArray(int size) {
    return std::make_unique<int[]>(size);
}

void inputArray(std::unique_ptr<int[]>& arr, int size) {
    int i = 0;
    cout << "Enter " << size << " integers:\n";
    while (i < size) {
        cin >> arr[i];
        i++;
    }
}

int calculateSum(const std::unique_ptr<int[]>& arr, int size) {
    int sum = 0;
    int i = 0;
    while (i < size) {
        sum += arr[i];
        i++;
    }
    return sum;
}
