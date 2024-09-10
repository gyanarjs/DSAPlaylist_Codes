#include <iostream>
#include <vector>
using namespace std;

int print2largest(vector<int> &arr)
{
    // Code Here
    int largest = arr[0];
    int slargest = -1;

    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] > largest)
        {
            slargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > slargest)
        {
            slargest = arr[i];
        }
    }
    return slargest;
}

int main()
{

    return 0;
}