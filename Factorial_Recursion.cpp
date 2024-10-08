/* The Question is
Find all factorial numbers less than or equal to n
A number n is called a factorial number if it is the factorial of a positive integer. For example, the first few factorial numbers are 1, 2, 6, 24, 120,
Given a number n, the task is to return the list/vector of the factorial numbers smaller than or equal to n.

Examples:

Input: n = 3
Output: 1 2
Explanation: The first factorial number is 1 which is less than equal to n. The second number is 2 which is less than equal to n,but the third factorial number is 6 which is greater than n. So we print only 1 and 2.
Input: n = 6
Output: 1 2 6
Explanation: The first three factorial numbers are less than equal to n but the fourth factorial number 24 is greater than n. So we print only first three factorial numbers.
Expected Time Complexity: O(K), Where K is the number of factorial numbers.
Expected Auxiliary Space: O(1)

Constraints:
1<=n<=1018
*/
// Logic behind the solution is it asked for to return fact no less or equal to n
// it also means we can find the fact <= n
// so below code is the process find the factorials 

#include<iostream>
#include<vector>
using namespace std;

vector<long long> factorialNumbers(long long n) {
        // Write Your Code here
        vector<long long>result;
        long long fact = 1;
        long long i = 1;
        
        while(fact <= n)
        {
            result.push_back(fact);
            i++;
            fact *= i;
        }
        return result;
        
    }

int main()
{
    long long n;
    cin >> n;
    factorialNumbers(n);

}