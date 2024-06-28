#include<iostream>
#include<vector>
#include<stack>
#include<queue>
#include<math.h>



using namespace std;


void explainPair()
{
    pair<int, int> p = {1, 3};
    cout << p.first << " " << p.second << endl;

    pair<int, pair<int, int>>p1 = {1, {3, 4}};
    cout << p1.first << " " << p1.second.first << " " << p1.second.second;

    pair<int, int> arr[] = {{1, 2}, {3, 4}, {5, 6}, {7, 8}};
    cout << arr[1].second;
}

void explainVector()
{
    vector<int> v;
    v.push_back(3);
    v.emplace_back(4); // this is faster than push_back

    vector<pair<int, int>> vec;
    vec.push_back({1, 2});
    vec.emplace_back(1, 2);

    vector<int> v1(5, 100); // here 5 is the size -> 100, 100, 100, 100, 100
    vector<int> v2(5); // it can have garbage value like 0,0,0,0,0

    vector<int> v3(5, 20);
    vector<int> v4(v3);// it is same as v3

    vector<int> :: iterator it = v.begin();
    vector<int> :: iterator itr = v.end(); // here end doest not point to the last element it is pointing to after the last element
    it++;
    cout << *(it) << endl; // value of it

    cout << v[0]; // value of 0 index
    cout << v.back();

    for(vector<int> :: iterator it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }
    // or we can write this
    for(auto it = v.begin(); it != v.end(); it++)
    {
        cout << *(it) << " ";
    }

    for(auto it : v)
    {
        cout << it << " ";
    }
    
    // {10, 20, 30, 40, 50}

    v.erase(v.begin()); // 10
    v.erase(v.begin() + 1); // 20
    v.erase(v.begin() + 1, v.begin() + 3); // 20, 30 v.begin() + 3 because we want to delete 30 and we have to write the after index 

    // insert function
    vector<int> vect(2, 100); // {100, 100}
    vect.insert(v.begin(), 300); // {300, 100, 100}
    vect.insert(v.begin() + 1, 2, 10); // {300, 10, 10, 100, 100}

    vector<int> copy(2, 50);
    vect.insert(v.begin(), copy.begin(), copy.end());//{50, 50, 300, 10, 10, 100, 100}


    //{10, 20}
    cout << v.size(); // 2

   v.pop_back(); // {10} pop out the last element 
   // v1 = {10 ,20}
   // v2 = {30, 40}
   v1.swap(v2); // v1 = {30, 40}  v2 = {10, 20}
    v.clear(); // popout all the element
    cout << v.empty();

}

void explainStack()
{
    stack<int> st;
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.emplace(5);

    cout << st.top();
    st.pop();

    cout << st.top();

    cout << st.size();
    cout << st.empty();

    stack<int>st1, st2;
    st1.swap(st2);


}

void expalainQueue()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(4); // {1, 2, 4}

    q.back() += 5;

    cout<< q.back(); // prints{1, 2, 9} 4+5 = 9
    cout<< q.front(); // prints 1
    q.pop(); // {2, 9}
    cout << q.front(); // 2
    

}

bool comp(pair<int, int> p1, pair<int, int> p2)
{
    if(p1.second < p2.second) return true;
    if(p1.second > p2.second) return false;

    if(p1.first > p2.first) return true;
    return false;

}
void expainExtra()
{
    vector<int>v;
    int a[7] = {1, 23, 5,4, 65, 6, 7};
    sort(a, a+7); // this is for arr  sort(a, a+n) for n number of elemnts
    sort(v.begin(), v.end()); // this for vector
    //sort(a, a+7, greater<int>); this for descending order

    //sort(a, a+7, comp); 

    int n= 7;
    int cnt = __builtin_popcount(n);

    long long num = 78347883774;
    int cnt2 = __builtin_popcountll(num);

    string s = "123";
    do{
        cout << s << endl;
    }while(next_permutation(s.begin(), s.end()));

    int maxi = *max_element(a, a + 7);
    







    

}








int main()
{
    

    return 0;
}