#include<iostream>
using namespace std;


void bubbleSort(int arr[], int n) {
        // Your code here
       for(int i = n - 1; i >= 1; i--)
       {
           int didSwap = 0;
           for(int j = 0; j <= i - 1; j++)
           {
               if(arr[j] > arr[j + 1])
               {
                   swap(arr[j + 1], arr[j]);
                   didSwap = 1;
               }
           }
           if(didSwap == 0)
           {
               break;
           }
       }
    }

int main()
{


    return 0;
}