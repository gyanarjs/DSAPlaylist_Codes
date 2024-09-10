#include <iostream>
#include <vector>
#include <map>
using namespace std;

int majorityElement(vector<int> v)
{
    // Write your code here
    map<int, int> mpp;
    for (int i = 0; i < v.size(); i++)
    {
        mpp[v[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second > v.size() / 2)
        {
            return it.first;
        }
    }
    return -1;
}

int main()
{

    return 0;
}