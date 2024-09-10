#include <iostream>
#include <vector>
using namespace std;

int missingNumber(vector<int> &a, int N)
{
    // Write your code here.
    int XOR1 = 0;
    int XOR2 = 0;
    for (int i = 0; i < N - 1; i++)
    {
        XOR2 = XOR2 ^ a[i];
        XOR1 = XOR1 ^ (i + 1);
    }
    XOR1 = XOR1 ^ N;

    return XOR1 ^ XOR2;
}

int main()
{

    return 0;
}