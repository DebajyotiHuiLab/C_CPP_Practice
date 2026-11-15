// Third Maximum Element in an Array

// Problem: Given an array of size n, find the third maximum distinct element in the array. If fewer than three distinct elements exist, print an appropriate message.


#include <iostream>
#include <climits>
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

    int first = INT_MIN;
    int second = INT_MIN;
    int third = INT_MIN;

    // Find first, second and third maximum elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == first || arr[i] == second || arr[i] == third)
        {
            continue;
        }

        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
        else if (arr[i] > third)
        {
            third = arr[i];
        }
    }

    if (third == INT_MIN)
    {
        cout << "Third maximum element does not exist" << endl;
    }
    else
    {
        cout << "Third Maximum Element = " << third << endl;
    }

    return 0;
}
