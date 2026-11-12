#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100];

    cout << "Enter array elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    // Reverse the array using two pointers
    int left = 0;
    int right = n - 1;

    while (left < right)
    {
        swap(arr[left], arr[right]);

        left++;
        right--;
    }

    cout << "Reversed array: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << '\n';

    return 0;
}
