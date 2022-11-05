#include<bits/stdc++.h>
using namespace std;
int main(){
    //  algortithm
//    1) scan front right to left
//  2) when ever the character encouter then push it into stack and if operator is encountered the pop 2 elements 
//  1st top element and operator and 2 nd top element
   string s="*+ab/ef";
   int n=s.size();
   stack<string>st;
   for(auto i=n-1;i>=0;i--){
      if(s[i]>='a'&&s[i]<='z'){
         string ans(1,s[i]);
          ;
         st.push(ans);
      }else{
       
        string a=st.top();
         st.pop();
         string b=st.top();
         st.pop();
         char c=s[i];
         st.push("("+a+c+b+")");
      }
   }
   cout<<st.top();
}
