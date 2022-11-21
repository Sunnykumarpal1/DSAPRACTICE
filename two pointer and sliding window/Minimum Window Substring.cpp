/* Given two strings s and t of lengths m and n respectively, return the minimum window substring of s such that every character in t (including duplicates) is included in the window. If there is no such substring, return the empty string "".

The testcases will be generated such that the answer is unique.

 

Example 1:

Input: s = "ADOBECODEBANC", t = "ABC"
Output: "BANC"
Explanation: The minimum window substring "BANC" includes 'A', 'B', and 'C' from string t.
Example 2:

Input: s = "a", t = "a"
Output: "a"
Explanation: The entire string s is the minimum window.
Example 3:

Input: s = "a", t = "aa"
Output: ""
Explanation: Both 'a's from t must be included in the window.
Since the largest window of s only has one 'a', return empty string.
 

Constraints:

m == s.length
n == t.length
1 <= m, n <= 105
s and t consist of uppercase and lowercase English letters.*/
  string minWindow(string s, string t) {
      if(t.size()>s.size()){
          return "";
      }
      int n=s.size();
        string final;
      int ans=INT_MAX,start=0;
      unordered_map<char,int>mp;
        for(auto i:t){
            mp[i]++;
        }
        int cnt=mp.size();
        int i=0,j=0;
        while(j<n){
           if(mp.find(s[j])!=mp.end()){
              mp[s[j]]--;
               if(mp[s[j]]==0){
                 cnt--;
               }
            }
            if(cnt==0){
               while(cnt==0){
                  if(ans>(j-i+1)){
                     ans=j-i+1;
                     start=i;
                  }
             if(mp.find(s[i])!=mp.end()){
                 mp[s[i]]++;
                 if(mp[s[i]]>0){
                   cnt++;
                  }
                }
              i++;
            }
           }
          j++;
         }
        if(ans!=INT_MAX){
        return final=s.substr(start,ans);
        }
        else 
            return "";
        
    }
