// Given an array arr[]. Your task is to find the minimum and maximum elements in the array.

// Examples:

// Input: arr[] = [1, 4, 3, 5, 8, 6]
// Output: [1, 8]
// Explanation: minimum and maximum elements of array are 1 and 8.
// Input: arr[] = [12, 3, 15, 7, 9]
// Output: [3, 15]
// Explanation: minimum and maximum element of array are 3 and 15.

#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[n];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Initialize minimum and maximum
    int minElement = arr[0];
    int maxElement = arr[0];

    // Find minimum and maximum
    for (int i = 1; i < n; i++) {

        if (arr[i] < minElement) {
            minElement = arr[i];
        }

        if (arr[i] > maxElement) {
            maxElement = arr[i];
        }
    }

    cout << "[" << minElement << ", " << maxElement << "]" << endl;

    return 0;
}