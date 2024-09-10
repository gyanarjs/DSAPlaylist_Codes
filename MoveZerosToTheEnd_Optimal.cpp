#include<iostream>
#include<vector>
using namespace std;
/* We are here using two pointers i and j. First we need to find j which is 
pointing to zero and when it is done we need to break out of the loop and 
store the index in j and next we have decalre i as j + 1 because and run a loop
to the end of the array and check if it is a non zero number then we need to swap
and move the poniter i and j 
doing this the all zeros will go to the end.
*/

void moveZeroes(vector<int>& nums) {
        int j = -1;
        int n = nums.size();
        for(int i = 0; i < n; i++)
        {
            if(nums[i] == 0)
            {
                j = i;
                break;
            }
        }
        if(j == -1)
        return;
        for(int i = j + 1; i < n; i++)
        {
            if(nums[i] != 0)
            {
                swap(nums[i], nums[j]);
                j++;
            }
        }
        
    }

int main()
{

}