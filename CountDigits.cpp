#include<iostream>
using namespace std;

// If the no of iterartions is based on division the TC will always be log based 
// Like in this case the TC is O(log10(n)) -> it is log10 because it divides by 10
// n = n / 10 if it is n = n / 5 then it will be log5
int countDigits(int n)
{
    int count = 0;
    while(n > 0)
    {
        int lastdigit = n % 10;
        count++;
        n = n / 10;
    }
    return count;

}

// or we can write this 
// int countDigits(int n)
// {
//     int cnt = (int)(log10(n) + 1);
//     return cnt;
// }

int main()
{
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    int result = countDigits(n);
    cout << result << endl;

}