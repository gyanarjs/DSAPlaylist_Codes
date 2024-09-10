#include<iostream>
using namespace std;

void select(int arr[], int i, int n)
    {
        // code here such that selectionSort() sorts arr[]
        int minimum = arr[i];
        int vitri = i;
        for (int j = i + 1; j  < n; j++) {
            if(minimum > arr[j]) {
                minimum = arr[j];
                vitri = j;
            }
        }
        swap(arr[i], arr[vitri]);
    }
     
    void selectionSort(int arr[], int n)
    {
       //code here
       if(n == 1) return;
       for (int i = 0; i < n-1; i++) {
           select(arr, i, n);
       }
    }

int main()
{

}