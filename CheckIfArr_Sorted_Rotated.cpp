#include <iostream>
#include <vector>
using namespace std;

bool check(vector<int> &nums)
{
    int n = nums.size();
    int r = 0;
    for (int i = 0; i < n; ++i)
    {
        if (nums[i] > nums[(i + 1) % n] && ++r > 1)
        {
            return false;
        }
    }
    return true;
}

int main()
{
    return 0;
}

/*
Variable Initialization:

const int n = nums.size(); initializes a constant integer n with the size of the nums vector.
int rotates = 0; initializes an integer rotates to keep track of the number of "rotations" detected in the array.
Loop through the array:

for (int i = 0; i < n; ++i) iterates through each element of the array nums.
Rotation Detection:

if (nums[i] > nums[(i + 1) % n] && ++rotates > 1) checks two conditions:
nums[i] > nums[(i + 1) % n]: Checks if the current element is greater than the next element (with wrap-around using modulo % n to handle the circular nature).
++rotates > 1: Increments the rotates counter and checks if it exceeds 1.
If both conditions are true, the method returns false, indicating that the array cannot be considered sorted after one rotation.
Return Statement:

return true; is reached if the loop completes without returning false, meaning the array can be considered sorted after at most one rotation.
Example:
Consider an example array nums = {3, 4, 5, 1, 2}:

Initially, rotates is 0.
Loop through the array:
3 <= 4 (no rotation detected)
4 <= 5 (no rotation detected)
5 > 1 (rotation detected, rotates becomes 1)
1 <= 2 (no rotation detected)
Since only one rotation is detected, the function returns true.
If there were another rotation detected, the function would return false.
*/