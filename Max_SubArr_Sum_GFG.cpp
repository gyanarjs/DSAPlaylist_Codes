#include <iostream>
#include <vector>
using namespace std;

long long pairWithMaxSum(long long arr[], long long N)
{
    // Your code goes here
    long long maxi = LONG_MIN;
    long long sum = 0;
    if (N < 2)
    {
        return 0;
    }
    for (int i = 0; i < N - 1; i++)
    {
        sum = arr[i] + arr[i + 1];
        if (sum > maxi)
        {
            maxi = sum;
        }
    }
    return maxi;
}

int main()
{

    return 0;
}
