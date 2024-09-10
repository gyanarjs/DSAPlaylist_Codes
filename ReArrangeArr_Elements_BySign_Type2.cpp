#include <iostream>
#include <vector>
using namespace std;

vector<int> alternateNumbers(vector<int> &a)
{
    // Write your code here.
    vector<int> pos, neg;
    int n = a.size();
    for (int i = 0; i < n; i++)
    {
        if (a[i] < 0)
        {
            neg.push_back(a[i]);
        }
        else
        {
            pos.push_back(a[i]);
        }
    }
    if (pos.size() > neg.size())
    {
        for (int i = 0; i < neg.size(); i++)
        {
            a[i * 2] = pos[i];
            a[i * 2 + 1] = neg[i];
        }
        int index = neg.size() * 2;
        for (int i = neg.size(); i < pos.size(); i++)
        {
            a[index] = pos[i];
            index++;
        }
    }
    else
    {
        for (int i = 0; i < pos.size(); i++)
        {
            a[i * 2] = pos[i];
            a[i * 2 + 1] = neg[i];
        }
        int index = pos.size() * 2;
        for (int i = pos.size(); i < neg.size(); i++)
        {
            a[index] = neg[i];
            index++;
        }
    }
    return a;
}

int main()
{
}