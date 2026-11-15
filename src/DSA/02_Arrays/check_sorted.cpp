// Check if an Array is Sorted

// Problem: Given an array of size n, check whether the array is sorted in non-decreasing (ascending) order.


#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bool isSorted = true;

    // Check if array is sorted
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            isSorted = false;
            break;
        }
    }

    if (isSorted)
    {
        cout << "Array is sorted" << endl;
    }
    else
    {
        cout << "Array is not sorted" << endl;
    }

    return 0;
}
