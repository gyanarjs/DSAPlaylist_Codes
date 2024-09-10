#include <iostream>
#include <vector>
using namespace std;

long long maxSubarraySum(vector<int> arr, int n)
{
    // Write your code here.

    long long sum = 0;
    long long maxi = LONG_MIN;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];

        if (sum > maxi)
        {
            maxi = sum;
        }

        if (sum < 0)
        {
            sum = 0;
        }
        // maxi = max(max, sum);
        

        // To consider the sum of the empty subarray
        if (maxi < 0)
        {
            maxi = 0;
        }
    }
    return maxi;
}

int main()
{
    return 0;
}