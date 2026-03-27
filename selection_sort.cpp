/*
 * Selection Sort Algorithm in C++
 * Author: Vaishnavi Kola
 * Date: 2026-03-27
 * This program implements the selection sort algorithm,
 * a simple sorting algorithm that divides the input list
 * into two parts: sorted and unsorted. It repeatedly
 * selects the smallest (or largest, depending on sorting order)
 * element from the unsorted part and moves it to the end of the sorted part.
 */

#include <iostream>
#include <vector>

// Function to perform selection sort on a vector
void selectionSort(std::vector<int>& arr) {
    int n = arr.size();
    for (int i = 0; i < n - 1; i++) {
        // Finding the minimum element in the unsorted array
        int minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        // Swapping the found minimum element with the first element
        std::swap(arr[i], arr[minIndex]);
    }
}

// Function to print an array
void printArray(const std::vector<int>& arr) {
    for (const int& element : arr) {
        std::cout << element << " ";
    }
    std::cout << std::endl;
}

// Main function to test the selection sort algorithm
int main() {
    std::vector<int> data = {64, 25, 12, 22, 11};
    std::cout << "Original array: ";
    printArray(data);

    selectionSort(data);

    std::cout << "Sorted array: ";
    printArray(data);
    return 0;
}