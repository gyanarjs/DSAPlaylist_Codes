#include<iostream>
using namespace std;
// the all code written below is using backtracking 
// because the print line is written after the function call 
// so print line wont work untill the base case is true 
// and after that from the last it will call to the fast 
// and will print the numbers 
//prints 1 to N without Loop
void printNos(int N)
{
    if(N == 0)
    {
        return;
    }
    printNos(N - 1);
    cout << N << " ";
        
}

//print GFG N times
void printGfg(int N) {
        // Code here
        if(N == 0)
        return;
        printGfg(N - 1);
        cout << "GFG" << " ";
    }

//print N to 1
void printNos(int N) {
        // code here
        if(N < 1)
        return;
        cout << N << " ";
        printNos(N - 1);
    }


int main()
{


    return 0;
}