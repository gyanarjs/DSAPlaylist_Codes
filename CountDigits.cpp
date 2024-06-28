#include<iostream>
using namespace std;


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