#include <iostream>
using namespace std;

int missingNum(int arr[], int n)
{
    for (int i = 0; i < n; i++) // this loop runs from 1 to n like natural num
    {
        int flag = 0;
        for (int j = 0; j < n - 1; j++) // this loop runs for the array
        {
            if (arr[j] == i) // if arr element is equal to natural num
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            return i; // this arr element is missing
        }
    }
}

int main()
{
}