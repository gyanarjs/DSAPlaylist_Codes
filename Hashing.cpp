#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    //precompute;
    // it can have only size till 10^6 because it is written inside the main for int  
    // but in globally it can be upto 10^7 for int 
    int hashh[13] = {0}; // if we decalare the arr in globally we dont have to write = {0} because it will not save the lements as garbage values
    for(int i = 0; i < n; i++)
    {
        hashh[arr[i]] += 1; // it means go to the arr and see the number and increase it in the hassh array
    }
        

    int q;
    cin >> q;
    while(q--)
    {
        int number;
        cin >> number;
        //fetch
        cout << hashh[number] << endl;
    }
    return 0;
}