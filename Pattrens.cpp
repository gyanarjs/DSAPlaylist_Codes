#include<iostream>
using namespace std;

void pattren1(int n)
{
    // outer loop is for rows
    for(int i = 0; i < n; i++)
    {
        // inner loop is for columns
        for(int j = 0; j < n; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern2(int a)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern3(int b)
{
    for(int i = 0; i < b; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << j;
        }
        cout << endl;
    }
}

void pattern4(int c)
{
    for(int i = 0; i < c; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            cout << i;
        }
        cout << endl;
    }
}

void pattern5(int d)
{
    for(int i = 0; i < d; i++)
    {
        for(int j = d; j > i; j--)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void pattern6(int e)
{
    for(int i = 0; i < e; i++)
    {
        for(int j = e; j > i; j--)
        {
            cout << e - j + 1;
        }
        cout << endl;
    }
}

// void pattren7(int f)
// {
//     for(int i = 0; i < f; i++)
//     {
//         for(int i = 0; )
//     }
// }

int main()
{
    int n = 6;
    pattren1(6);
    
    int a = 5;
    pattern2(5);

    int b = 6;
    pattern3(6);

    cout << endl;
    int c = 5;
    pattern4(5);

    cout << endl;
    int d = 4;
    pattern5(5);

    cout << endl;
    int e = 6;
    pattern6(6);



}