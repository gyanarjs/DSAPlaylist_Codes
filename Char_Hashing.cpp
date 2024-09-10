#include<iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;

    //precompute
    int hash[26] = {0}; // 26 because it is for lower case
    // for all characters like upper case and lower case and other chars
    //for(int i = 0; i < 256; i++)
    for(int i = 0; i < s.size(); i++)
    {
        // because in order to find asccii 
        //we have to do chracter - 'a'
        // for all characters like upper case and lower case and other chars
        // hash[s[i]]++;
        hash[s[i] - 'a']++; 

    }

    int q;
    cin >> q;
    while(q--)
    {
        char c;
        cin >> c;
        //fetch
        cout << hash[c - 'a'] << endl;
        // for all characters like upper case and lower case and other chars
        //cout << hash[c] << endl;


    }
}