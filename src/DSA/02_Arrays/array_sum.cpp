// Sum of Array Elements in C++
// Problem: Given an array of size n, find the sum of all its elements.


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[n];
    int sum = 0;

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Calculate sum of array elements
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }

    cout << "Sum = " << sum << endl;

    return 0;
}
