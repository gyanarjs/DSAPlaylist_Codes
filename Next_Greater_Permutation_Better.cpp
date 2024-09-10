#include <iostream>
#include <vector>
using namespace std;

vector<int> nextGreaterPermutation(vector<int> &A)
{
    // Write your code here.
    next_permutation(A.begin(), A.end());
    return A;
}

int main()
{

    return 0;
}