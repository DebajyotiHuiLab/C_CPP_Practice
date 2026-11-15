// Count Even and Odd Elements in an Array

// Problem: Given an array of size n, count the number of even and odd elements.

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

    int evenCount = 0;
    int oddCount = 0;

    // Count even and odd elements
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout << "Even Count = " << evenCount << endl;
    cout << "Odd Count = " << oddCount << endl;

    return 0;
}
