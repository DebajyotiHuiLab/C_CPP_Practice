// Find Frequency of Each Element in an Array

// Problem: Given an array of size n, find and display the frequency of each distinct element (the number of times each element occurs in the array).



#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    int arr[100];
    bool visited[100] = {false};

    // Input array elements
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Find frequency of each element
    for (int i = 0; i < n; i++)
    {
        if (visited[i])
        {
            continue;
        }

        int count = 1;

        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] == arr[j])
            {
                count++;
                visited[j] = true;
            }
        }

        cout << arr[i] << " occurs " << count << " times" << endl;
    }

    return 0;
}
