#include <iostream>
#include <vector>
using namespace std;

int getSingleElement(vector<int> &arr)
{
    // Write your code here.
    int xorr = 0;
    int n = arr.size();
    for (int i = 0; i < n; i++)
    {
        xorr = xorr ^ arr[i];
    }
    return xorr;
}

int main()
{
    
}