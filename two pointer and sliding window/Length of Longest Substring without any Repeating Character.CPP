// Length of Longest Substring without any Repeating Character
// Problem Statement: Given a String, find the length of longest substring without any repeating character.

// Examples:

// Example 1:

// Input: s = ”abcabcbb”

// Output: 3

// Explanation: The answer is abc with length of 3.

// Example 2:

// Input: s = ”bbbbb”

// Output: 1

// Explanation: The answer is b with length of 1 units.
// Solution
// Disclaimer: Don’t jump directly to the solution, try it out yourself first.

// Solution 1: Brute force Approach

// Approach: This approach consists of taking the two loops one for traversing the string and another loop – nested loop for finding different substrings and after that, we will check for all substrings one by one and check for each and every element if the element is not found then we will store that element in HashSet otherwise we will break from the loop and count it.
//  here this solution uses O(2N) it can be reduced furhter . and space complextiy O(n)
  int lengthOfLongestSubstring(string s) {
       int n=s.size();
        unordered_map<char,int>mp;
   
        int lef=0;
        int len=0,i=0;
           while(i<n){
            if(mp.find(s[i])==mp.end()){
                len=max(len,i-lef+1);
                mp[s[i]]++;
                cout<<s[i]<<" ";
            }else{
                 while(s[lef]!=s[i]){
                      mp.erase(s[lef]);
                     lef++;
                 }
                 mp.erase(s[lef]);
                lef++;
                mp[s[i]]++;
                len=max(len,i-lef+1);
                }
               i++; 
        }
        return len;
    }
