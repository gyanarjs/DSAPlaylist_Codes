#include <vector>
#include <map>
#include <algorithm> // for max function
using namespace std;

// this is the optmial for only positive 

int longestSubarrayWithSumK(vector<int> a, long long k)
{
    int left = 0;
    int right = 0;
    int n = a.size();
    long long sum = a[0];
    int maxLen = 0;
    while (right < n)
    {
        while (left <= right && sum > k)
        {
            sum -= a[left];
            left++;
        }

        if (sum == k)
        {
            maxLen = max(maxLen, right - left + 1);
        }
        right++;
        if (right < n)
        {
            sum += a[right];
        }
    }
    return maxLen;
}

int main()
{

    return 0;
}