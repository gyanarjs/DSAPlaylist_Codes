#include<iostream>
#include<vector>
using namespace std;

void printDivisors(int n)
{
    vector<int> ls;
    // 6 * 6 = 36;
    // 7 * 7 = 49 this will not be executed
    for(int i = 1; i * i <= n; i++)
    {
        if(n % i == 0)
        {
            ls.push_back(i);
        }
        if((n / i) != i)
        {
            ls.push_back(n / i);
        }
    }

    sort(ls.begin(), ls.end());
    for(auto element : ls)
    {
        cout << element << " ";
    }
    cout << endl;
}
int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    printDivisors(n);
}