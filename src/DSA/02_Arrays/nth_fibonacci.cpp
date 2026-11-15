#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;  // Position of the Fibonacci number
    cin >> n;

    long long arr[1000];

    // Base cases
    arr[0] = 0;
    arr[1] = 1;

    // Calculate Fibonacci numbers
    for (int i = 2; i < n; i++) {
        arr[i] = arr[i - 1] + arr[i - 2];
    }

    // Print the nth Fibonacci number (1-based position)
    cout << n << "th Fibonacci number is: " << arr[n - 1] << endl;

    return 0;
}
