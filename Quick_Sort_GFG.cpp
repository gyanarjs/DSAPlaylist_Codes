#include<iostream>
#include<vector>
using namespace std;
  void quickSort(int arr[], int low, int high)
    {
        if(low<high)
        
        {
            int p=partition(arr,low,high);
            quickSort(arr,low,p-1);
            quickSort(arr,p+1,high);
            
        }
    }
    
  
    int partition (int arr[], int low, int high)
    {
       int pivot=low;
       int i=low;
       int j=high;
       while(i<j)
       {
           while(arr[i]<=arr[pivot])
           {
               i++;
           }
           while(arr[j]>arr[pivot])
           {
               j--;
           }
           if(i<j)
           {
               swap(arr[j],arr[i]);
           }
       }
       swap(arr[j],arr[pivot]);
       return j;
    }


int main()
{

}