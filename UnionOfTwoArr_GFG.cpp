#include<iostream>
#include<vector>
using namespace std;


 vector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        //Your code here
        //return vector with correct order of elements
        int i = 0;
        int j = 0;
        vector<int> UnionArr;
        // int k = 10000;
        // int UnionArr[k];
        
        while(i < n && j < m)
        {
            if(arr1[i] < arr2[j])
            {
                if(UnionArr.size() == 0 || UnionArr.back() != arr1[i])
                {
                    UnionArr.push_back(arr1[i]);
                }
                i++;
            }
            else
            {
                if(UnionArr.size() == 0 || UnionArr.back() != arr2[j])
                {
                    UnionArr.push_back(arr2[j]);
                }
                j++;
            }
        }
        while( i < n)
        {
           if(UnionArr.size() == 0 || UnionArr.back() != arr1[i])
           {
               UnionArr.push_back(arr1[i]);
           }
           i++;
        }
        while(j < m)
        {
            if(UnionArr.size() == 0 || UnionArr.back() != arr2[j])
            {
                UnionArr.push_back(arr2[j]);
            }
            j++;
        }
        
        return UnionArr;
        
    }
    


int main()
{

}