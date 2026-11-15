//Minimum Element in an Array

//Problem: Given an array of size n, find the smallest element in the array.


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

    // Assume the first element is minimum
    int minElement = arr[0];

    // Find minimum element
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < minElement)
        {
            minElement = arr[i];
        }
    }

    cout << "Minimum Element = " << minElement << endl;

    return 0;
}

