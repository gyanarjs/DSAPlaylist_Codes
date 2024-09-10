#include<iostream>
#include<map>
#include<vector>
using namespace std;
string read(int n, vector<int> book, int target)
{
    // Write your code here.
    map<int, int> mpp;
    for(int i = 0; i < n; i++)
    {
        int a = book[i];
        int more = target - a;
        if(mpp.find(more) != mpp.end())
        {
            return "YES"; // if we have to return the index return {mpp[more], i};
        }
        mpp[a] = i;
    }
    return "NO";
}

int main()
{

    
    return 0;
}
