// Search an Element in an Array (Linear Search)

// Problem: Given an array of size n and a target element, search for the target in the array using Linear Search. If found, print its index; otherwise, print that the element is not found.

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

    int target;
    cin >> target;

    int index = -1;

    // Perform Linear Search
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            index = i;
            break;
        }
    }

    if (index != -1)
    {
        cout << "Element found at index " << index << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    return 0;
}
