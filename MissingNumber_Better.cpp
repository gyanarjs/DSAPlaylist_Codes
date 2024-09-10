#include<iostream>
using namespace std;

int missingNum(int arr[], int n)
{
    int hashh[n + 1];
    for(int i = 0; i <= n; i++)
    {
        hashh[i] = 0;
    }
    for(int i = 0; i < n; i++)
    {
        hashh[arr[i]] = 1;
    }
    for(int i = 1; i < n; i++)
    {
        if(hashh[i] == 0)
        {
            return i;
        }
    }

}

int main()
{

}