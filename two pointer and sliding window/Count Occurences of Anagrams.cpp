// iven a word pat and a text txt. Return the count of the occurences of anagrams of the word in the text.

// Example 1:

// Input:
// txt = forxxorfxdofr
// pat = for
// Output: 3
// Explanation: for, orf and ofr appears
// in the txt, hence answer is 3.
// Example 2:

// Input:
// txt = aabaabaa
// pat = aaba
// Output: 4
// Explanation: aaba is present 4 times
// in txt.
// Your Task:
// Complete the function search() which takes two strings pat, txt, as input parameters and returns an integer denoting the answer. You don't to print answer or take inputs.

// Expected Time Complexity: O(N)
// Expected Auxiliary Space: O(26) or O(256)

// Constraints:
// 1 <= |pat| <= |txt| <= 105
// Both string contains lowercase english letters.
int search(string pat, string txt) {
	  
	   int n=txt.size(),k=pat.size();
	   unordered_map<int,int>mp;
	   for(auto i:pat){
	       mp[i]++;
	   }
	   int ans=0,count=mp.size();
	     //  this for first k elements
	     int i=0,j=0;
	   for(auto i=0;i<k;i++){
	       if(mp.find(txt[i])!=mp.end()){
	           mp[txt[i]]--;
	           if(mp[txt[i]]==0){
	               count--;
	           }
	       }
	   }
	   if(count==0){
	       ans++;
	     
	   }
	   // now the calculation starts for k->n elements
	   for(auto i=k;i<n;i++){
	       // for removing the elements
	      if(mp.find(txt[j])!=mp.end()){
	       mp[txt[j]]++;
	       if(mp[txt[j]]==1){
	           count++;
	       }
	      }
	      j++;
	   //    for adding the elements
	     if(mp.find(txt[i])!=mp.end()){
	         mp[txt[i]]--;
	         if(mp[txt[i]]==0){
	             count--;
	         }
	     }
	     if(count==0){
	         ans++;
	     }
	       
	       
	   }
	   return ans;
	}
