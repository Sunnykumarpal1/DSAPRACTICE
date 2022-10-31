#include<bits/stdc++.h>
using namespace std;
int main()
{
    //  algo
    //  1) if it's  number or alphabet  then push into stack .
    //  2) if it's operator then pop 2 element of stack and operator b/w them and push it into stack
    //  string s={ab+ef/*}
    string s="ab+ef/*";
    stack<string>st;
    int n=s.size();
    for(auto i=0;s[i]!='\0';i++){
        if(s[i]>='a'&& s[i]<='z'){
          string a(1,s[i]);
          st.push(a);
         


        }else if(!st.empty()&& s[i]=='+'||s[i]=='-'||s[i]=='*'||s[i]=='/'||s[i]=='^'){
             string b=st.top();
             st.pop();
             string a=st.top();
             st.pop();
             char c=s[i];
             st.push("("+a+c+b+")");
        }
    }
    string fans=st.top();
    cout<<fans;
    
    
}
