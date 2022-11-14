/*Given a string s consisting only of characters a, b and c.

Return the number of substrings containing at least one occurrence of all these characters a, b and c.

 

Example 1:

Input: s = "abcabc"
Output: 10
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "abc", "abca", "abcab", "abcabc", "bca", "bcab", "bcabc", "cab", "cabc" and "abc" (again). 
Example 2:

Input: s = "aaacb"
Output: 3
Explanation: The substrings containing at least one occurrence of the characters a, b and c are "aaacb", "aacb" and "acb". 
Example 3:

Input: s = "abc"
Output: 1
 

Constraints:

3 <= s.length <= 5 x 10^4
s only consists of a, b or c characters.
*/
bruteforce 
tc ->O(n^2)
sc ->O(1)
  
 int numberOfSubstrings(string s) {
        long long  cnt=0;
        unordered_map<char,int>mp;
        int n=size(s);
        for(auto i=0;i<n;i++){
             unordered_map<char,int>mp;
           for(auto j=i;j<n;j++){
                mp[s[j]]++;
            if(mp.size()==3){
                cnt++;
            }
            
        }
      }
       return cnt;
    }
//  optimal solution O(n)
int numberOfSubstrings(string s) {
        int n=s.size();
        int cnt=0;
        int ind_a=-1,ind_b=-1,ind_c=-1;
        for(auto i=0;i<n;i++){
//here we are storing where last time the the particular character have occured
            if(s[i]=='a'){
                ind_a=i;
            }else if(s[i]=='b'){
                ind_b=i;
            }else{
                ind_c=i;
            }
//            because we need to have 3 charachters so 
            if(i>1){ 
// here since it is possible to make a substring from current index it is possible to make from the previous index aswell. thats why we are doing minimum val of the character+1
              int var=min(ind_a,ind_b);
              int temp=min(var,ind_c);
              cnt+=temp+1;
            }
        }
        return cnt;
    }
