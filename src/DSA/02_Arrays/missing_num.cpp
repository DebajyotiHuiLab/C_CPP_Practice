#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int n;
    cin >> n;

    int arr[100];

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int total_sum = ((n + 1) * (n + 2)) / 2;
    int actual_sum = 0;

    for(int i = 0; i < n; i++){
        actual_sum += arr[i];
    }

    int missing_number = total_sum - actual_sum;

    cout << "The missing number in the array is: " << missing_number << endl;

    return 0;
}