#include <iostream>
#include <vector>
using namespace std;

vector<int> superiorElements(vector<int> &a)
{
    // Write your code here.
    // O(N)
    vector<int> ans;
    int maxi = INT_MIN;
    int n = a.size();
    // O(N)
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] > maxi)
        {
            ans.push_back(a[i]);
        }
        maxi = max(maxi, a[i]);
    }

    // O(N log N)
    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{

    return 0;
}