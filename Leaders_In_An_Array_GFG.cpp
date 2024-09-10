#include <iostream>
#include <vector>
using namespace std;

vector<int> leaders(int n, int arr[])
{
    // Code here
    vector<int> ans;
    int maxi = arr[n - 1];
    ans.push_back(maxi);
    for (int i = n - 2; i >= 0; i--)
    {
        if (arr[i] >= maxi)
        {
            ans.push_back(arr[i]);
        }
        maxi = max(maxi, arr[i]);
    }
    reverse(ans.begin(), ans.end());

    return ans;
}

int main()
{

    return 0;
}