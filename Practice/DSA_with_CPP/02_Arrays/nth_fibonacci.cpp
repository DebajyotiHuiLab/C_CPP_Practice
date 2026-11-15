#include <bits/stdc++.h>
using namespace std;

// Problem:
// Given a number n, find the nth Fibonacci number.
//
// The Fibonacci sequence is a sequence of numbers in which
// each number is the sum of the two preceding numbers.
//
// The sequence starts with 0 and 1.
//
// Examples:
//
// Input: n = 1
// Output: 0
// Explanation: The 1st Fibonacci number is 0.
//
// Input: n = 2
// Output: 1
// Explanation: The 2nd Fibonacci number is 1.
//
// Input: n = 7
// Output: 8
// Explanation: The sequence is 0, 1, 1, 2, 3, 5, 8.
//
// Input: n = 10
// Output: 34
// Explanation: The 10th Fibonacci number is 34.

int main() {

    int n;
    cin >> n;

    long long arr[100];

    // Initialize the first two Fibonacci numbers
    arr[0] = 0;  // 1st Fibonacci number
    arr[1] = 1;  // 2nd Fibonacci number

    // Calculate the remaining Fibonacci numbers
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Print the nth Fibonacci number
    cout << n << "th Fibonacci number is: " << arr[n - 1] << endl;

    return 0;
}