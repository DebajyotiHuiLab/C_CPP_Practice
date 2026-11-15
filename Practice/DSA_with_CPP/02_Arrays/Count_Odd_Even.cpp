// Given an array arr[] of positive integers. The task is to return the count of the number of odd
// and even elements in the array.
//  Input: arr[] = [1, 2, 3, 4, 5]
//  Output: 3 2
//  Explanation: There are 3 odd elements (1, 3, 5) and 2 even elements (2 and 4).
//  Input: arr[] = [1, 1]
//  Output: 2 0
//  Explanation: There are 2 odd elements (1, 1) and no even elements.


#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    int arr[100];

    // Input array elements
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int odd = 0;
    int even = 0;

    // Count odd and even elements
    for (int i = 0; i < n; i++) {

        if (arr[i] % 2 != 0) {
            odd++;
        }
        else {
            even++;
        }
    }

    cout << odd << " " << even << endl;

    return 0;
}

