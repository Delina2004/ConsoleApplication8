# Smart Pointer Dynamic Array Sum in C++

This project demonstrates how to use smart pointers for dynamic memory allocation in C++. It involves:
- Dynamically allocating an array of integers using `std::unique_ptr`.
- Filling the array with user input using smart pointers.
- Calculating and printing the sum of the array elements.

## Project Structure

The project consists of three files:
1. **Header File (`ArrayOperations.h`)**: Contains function declarations for creating, filling, and summing an array.
2. **Source File (`ArrayOperations.cpp`)**: Defines the logic for smart pointer-based array operations.
3. **Main File (`main.cpp`)**: Contains the main function, where the program interacts with the user.

### Files

- `ArrayOperations.h` - Function declarations for dynamic memory allocation and array operations using smart pointers.
- `ArrayOperations.cpp` - Implementation of the functions for array creation, input, and sum calculation.
- `main.cpp` - Runs the main program logic using the functions defined in the header and source files.
- `README.md` - Provides an overview of the project and instructions on how to run it.

## Features

- Uses **smart pointers (`std::unique_ptr`)** for automatic memory management.
- Eliminates the need for manual memory deallocation (`delete[]`).
- Demonstrates the use of `while` loops for filling and summing the array.

How it Works
Enter the number of elements: 4
Enter 4 integers:
10 15 20 25
The sum of the array is: 70

