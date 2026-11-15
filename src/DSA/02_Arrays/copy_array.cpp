// Copy One Array to Another

// Problem: Given an array of size n, copy all its elements into another array and display the copied array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr1[100];
    int arr2[100];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr1[i];
    }

    // Copy elements from arr1 to arr2
    for (int i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }

    // Display copied array
    cout << "Copied Array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr2[i] << " ";
    }

    cout << endl;

    return 0;
}
