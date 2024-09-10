#include <iostream>
#include <vector>
using namespace std;

vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	vector<int> ans;
	int visit[] = {0}; // size of visit should be m
	for(int i = 0; i < n; i++)
	{
		for(int j = 0; j < m; j++)
		{
			if(arr1[i] == arr2[j] && visit[j] == 0)
			{
				ans.push_back(arr1[i]);
				visit[j] = 1;
				break;
			}
			if(arr2[j] > arr1[i])
			{
				break;
			}
		}
	}
	return ans;
}

int main()
{
    return 0;
}