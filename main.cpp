#include <iostream>
#include <vector>

const int number[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 21, 22, 23, 24, 25, 26, 27, 28, 29, 30, 31, 32, 33, 34, 35, 36, 37, 38, 39, 40, 41, 42, 43, 44, 45, 46, 47, 48, 49, 50, 51, 52, 53, 54, 55, 56, 57, 58, 59, 60, 61, 62, 63, 64, 65, 66, 67, 68, 69, 70, 71, 72, 73, 74, 75, 76, 77, 78, 79, 80, 81, 82, 83, 84, 85, 86, 87, 88, 89, 90, 91, 92, 93, 94, 95, 96, 97, 98, 99, 100};

int binarySearch (int expectedN, int low, int high) {
    if ( high >= low ) {
        int mid = low + (high - low) / 2;

        // If expected value mid
        if ( number[mid] == expectedN ) {
            return mid;
        }

        if ( number[mid] > expectedN )
            return binarySearch(expectedN, low, mid - 1);
        else
            return binarySearch(expectedN, mid + 1, high); 
    }

    // Not have expected value
    return -1;
}

/*
    ! Search Number Without Algorithm cases
    * Best Case : 1
    * Avarage Case : 50
    * Worst Case : 100
*/


int searchNumberWithoutAlgorithm (int expectedN) {
    int size = sizeof(number) / sizeof(number[0]) - 1;
    for ( int i = 0; i < size; i++ ) {
        if ( expectedN == number[i] )
            return number[i]
    }
    return -1;
}

int main () {
    bool withAlgorithm = true;
    int expected;
    std::cout << "Please enter number (1-100)" << '\n';
    std::cin >> expected;

    /*
        With Binary Search
    */
    if ( expected > 100 || expected < 0 )  {
        std::cout << "Enter number between 1 and 100" << '\n';
    } else {
        if ( withAlgorithm ) {
            int size = sizeof(number) / sizeof(number[0]);
            int search = binarySearch(expected, 0, size - 1);

            if ( search == -1 )
                std::cout << "Not fount expected value" << '\n';
            else
                std::cout << "Element is found at index : " << search << '\n';
        } else {
            int search = searchNumberWithoutAlgorithm(expected);

            if ( search == -1 )
                std::cout << "Not fount expected value" << '\n';
            else
                std::cout << "Element is found at index : " << search << '\n';
        }
    }
}