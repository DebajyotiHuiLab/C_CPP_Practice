
#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "Enter array size: ";
    cin >> n;

    int arr[100];

    cout << "Enter " << n << " elements: ";

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int sum = 0;
    int maximum = arr[0];
    int minimum = arr[0];

    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }

        if (arr[i] < minimum)
        {
            minimum = arr[i];
        }
    }

    cout << "\nArray elements: ";

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "\nSum = " << sum;
    cout << "\nMaximum = " << maximum;
    cout << "\nMinimum = " << minimum << '\n';

    return 0;
}
