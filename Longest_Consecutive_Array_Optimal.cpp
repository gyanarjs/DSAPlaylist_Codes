#include <iostream>
#include <vector>
#include<set>
#include<unordered_set>
using namespace std;

int longestConsecutive(vector<int> &nums)
{
    int n = nums.size();
    if (n == 0)
        return 0;
    int count = 0;
    int longest = 1;
    unordered_set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(nums[i]);
    }

    for (auto it : st)
    {
        //This condition checks if the element just before it (i.e., it - 1) is not present in the set st.
        //If it - 1 is not found in the set, it means it could be the start of a new consecutive sequence.
        if (st.find(it - 1) == st.end())
        {
            int count = 1;
            int x = it;

            //This while loop increments x and count as long as the next consecutive element (x + 1) is found in the set.
            //The loop continues until there are no more consecutive elements.
            while (st.find(x + 1) != st.end())
            {
                x++;
                count++;
            }
            longest = max(longest, count);
        }
    }
    return longest;
}

int main()
{
}