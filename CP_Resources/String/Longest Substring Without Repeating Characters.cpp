// c++ code for finding Longest Substring Without Repeating Characters

/* problem statement: Given a string s, find the length of the longest substring without repeating characters.
   
 e.g-
   Input: s = "abaabcbb"
   Output: 3 // "abc"
     
*/

// Time complexity : O(length of string) 

#include <bits/stdc++.h>
using namespace std;

int lengthOfLongestSubstring(string s) {
     
    vector<int> charIndex(256, -1);
    int longest = 0, m = 0;

    for (int i = 0; i < s.length(); i++) {
         
        m = max(charIndex[s[i]] + 1, m);
        
        charIndex[s[i]] = i;
        
        longest = max(longest, i - m + 1);
        
    }

    return longest;
}

// Driver code
int main()
{
  string s;
  cin>>s;
  
  cout << lengthOfLongestSubstring( s) ;
  
  return 0;
}
