#include<iostream>
#include<vector>
using namespace std;

void setZeros(vector<vector<int>>& matrix)
{
    const int m = matrix.size();
    const int n = matrix[0].size();

    vector<int> row(m, 0);
    vector<int> col(n, 0);

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(matrix[i][j] == 0)
            {
                row[i] = 1;
                col[j] = 1;
            }
        }
    }

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            if(row[i] || col[j])
            {
                matrix[i][j] = 0;
            }
        }
    }
}

int main()
{

}