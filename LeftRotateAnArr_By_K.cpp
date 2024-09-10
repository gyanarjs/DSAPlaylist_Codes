#include<iostream>
#include<vector>
using namespace std;

void leftRotate(int arr[], int n, int d)
{
    reverse(arr, arr + d);
    reverse(arr + d, arr + n);
    reverse(arr, arr + n);
}

vector<int> rotateArray(vector<int>arr, int k) {
    // Write your code here.
    int n = arr.size();
    k = k % n;
    int temp[k];
    for(int i = 0; i < k; i++) // Store the elements in temp arr
    {
        temp[i] = arr[i];
    }
    for(int i = k; i < n; i++) // Shifting the arr
    {
        arr[i - k] = arr[i];
    }
    for(int i = n - k; i < n; i++) // Putback temp arr in the original arr
    {
       arr[i] = temp[i - (n - k)];
    }
    return arr;
}


int main()
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int d;
    cin >> d;
    leftRotate(arr, n, d);
    
    return 0;
}