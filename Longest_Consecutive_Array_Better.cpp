#include <iostream>
#include <vector>
using namespace std;

int longestSuccessiveElements(vector<int> &a)
{
    // Write your code here.
    int n = a.size();
    sort(a.begin(), a.end());
    if (n == 0)
    {
        return 0;
    }
    int count = 0;
    int lastSmaller = INT_MIN;
    int longest = 1;

    for (int i = 0; i < n; i++)
    {
        if (a[i] - 1 == lastSmaller)
        {
            count += 1;
            lastSmaller = a[i];
        }
        else if (a[i] != lastSmaller)
        {
            count = 1;
            lastSmaller = a[i];
        }
        longest = max(longest, count);
    }
    return longest;
}

int main()
{
}