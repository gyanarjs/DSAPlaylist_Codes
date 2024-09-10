#include<iostream>
#include<vector>
using namespace std;

void frequencyCount(vector<int>& arr,int N, int P)
    { 
        // code here
        vector<int> hash(N, 0);
        
        for(int i = 0; i < N; i++)
        {
           if(arr[i] <= N)
           {
                hash[arr[i] - 1]++;
           }
        }
        
        for(int i = 0; i < N; i++)
        {
            arr[i] = hash[i];
        }
        
    }

int main()
{

    return 0;
}