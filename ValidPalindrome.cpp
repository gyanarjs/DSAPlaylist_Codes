#include<iostream>
using namespace std;

bool isPalindrome(string s) {
    int l = 0;
    int r = s.length() - 1;

    // Loop until the two pointers meet in the middle
    while (l < r) {
      // Skip non-alphanumeric characters from the left
      while (l < r && !isalnum(s[l]))
        ++l;
      // Skip non-alphanumeric characters from the right
      while (l < r && !isalnum(s[r]))
        --r;
      // Compare the characters at the current pointers, case-insensitive
      if (tolower(s[l]) != tolower(s[r]))
        return false;
      // Move the pointers towards the center
      ++l;
      --r;
    }

    // If no mismatches were found, the string is a palindrome
    return true;
  }

int main()
{
    string str;
    getline(cin, str);
    bool result = isPalindrome(str);
    cout << result << endl;

}