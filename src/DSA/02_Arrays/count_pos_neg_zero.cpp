// Count Positive, Negative and Zero Elements in an Array

// Problem: Given an array of size n, count the number of positive, negative, and zero elements.


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

    int positiveCount = 0;
    int negativeCount = 0;
    int zeroCount = 0;

    // Count positive, negative and zero elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > 0)
        {
            positiveCount++;
        }
        else if (arr[i] < 0)
        {
            negativeCount++;
        }
        else
        {
            zeroCount++;
        }
    }

    cout << "Positive Count = " << positiveCount << endl;
    cout << "Negative Count = " << negativeCount << endl;
    cout << "Zero Count = " << zeroCount << endl;

    return 0;
}
