// Given an array arr[] of size n - 1 containing distinct integers in the range [1, n]. The array
// represents a permutation of the integers from 1 to n with exactly one element missing.

// Find the missing element.

// Examples:

// Input: arr[] = [1, 2, 3, 5]
// Output: 4
// Explanation: All the numbers from 1 to 5 are present except 4.
// Input: arr[] = [8, 2, 4, 5, 3, 7, 1]
// Output: 6
// Explanation: All the numbers from 1 to 8 are present except 6.
// Input: arr[] = [1]
// Output: 2
// Explanation: Only 1 is present so the missing element is 2.


#include <bits/stdc++.h>
using namespace std;

int main() {

    int size;
    cin >> size;

    int arr[100];

    // Input array elements
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    // Calculate the sum of array elements
    int elementSum = 0;

    for (int i = 0; i < size; i++) {
        elementSum += arr[i];
    }

    // Calculate the expected sum of first (size + 1) natural numbers
    int n = size + 1;
    int totalSum = (n * (n + 1)) / 2;

    // Calculate the missing element
    int missingElement = totalSum - elementSum;

    cout << missingElement << endl;

    return 0;
}
