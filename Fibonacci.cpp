#include<iostream>
using namespace std;

int fib(int n)
{
    // base case for 0 and 1
    if(n <= 1)
    {
        return n;
    }
    // or we can write
    // int last = fib( n - 1);
    //int slast = fib(n - 2);
    // return last + slast;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cin >> n;

    fib(n);

}