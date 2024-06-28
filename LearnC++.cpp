#include <iostream>
using namespace std;

int main()
{
    // cout << "Hey Striver! " << endl;;
    // cout << "hey Striver! " << endl;

    // int x, y;
    // cin >> x >> y;
    // cout << "Value of x is: " << x << "Value of y is: " << y << endl;

    // int
    // int x = 10;

    // long
    // long x = 100000000;

    // long long
    // long long x = 1000879879778987;

    // float, double
    // float x = 23.44;
    // float x1 = 23;
    // double y = 34;
    // cout << x1 << " " << y << endl;

    // String 1
    // string str;
    // cin >> str;
    // cout << str << endl;

    // String and getline
    // string str;
    // getline(cin, str);
    // cout << str << endl;

    // // char
    // char ch;
    // cin >> ch;
    // cout << ch << endl;

    // Write a program that takes a input of an age
    // and prints if you are an adult or not
    // >= 18 yes
    // <18 no

    // int age;
    // cout << "Enter your age: " << endl;
    // cin >> age;

    // if (age >= 18)
    // {
    //     cout << "You are an adult !" << endl;
    // }
    // else if (age < 18)
    // {
    //     cout << "You are not an adult !" << endl;
    // }

    // Take marks from the user and print Grade

    // int marks;
    // cout << "Enter your marks: " << endl;
    // cin >> marks;

    // if (marks < 25)
    // {
    //     cout << "F" << endl;
    // }
    // else if (marks <= 44)
    // {
    //     cout << "E" << endl;
    // }
    // else if (marks <= 49)
    // {
    //     cout << "D" << endl;
    // }
    // else if (marks <= 69)
    // {
    //     cout << "C" << endl;
    // }
    // else if (marks <= 79)
    // {
    //     cout << "B" << endl;
    // }
    // else if (marks <= 100)
    // {
    //     cout << "A" << endl;
    // }

     int age;
     cout << "Enter the age: " << endl;
     cin >> age;

     if(age < 18)
     {
        cout << "Not eligible for job. " << endl;
     }
     else if(age <= 54)
     {
        cout << "Eligible for job. " << endl;
     }
     else if(age <= 57)
     {
        cout << "Eligible for job, but retirement soon. " << endl;
     }
     else
     {
        cout << "Retirement time. " << endl;
     }

    return 0;
}