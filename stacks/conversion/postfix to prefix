#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="abc/-ak/l-*";
    int n=s.size();
    stack<string>st;
    for(auto i=0;i<n;i++){
       if(s[i]>='a'&& s[i]<='z'||s[i]>='0'&& s[i]<='9'|| s[i]>='A'&& s[i]<='Z'){
         string news="";
        news+=s[i];
        st.push(news);
       }else{
         string first="";
         first+=st.top();
         st.pop();
         string second="";
         second+=st.top();
         st.pop();
         char  ch=s[i];
         st.push(ch+second+first);

       }

    }
    cout<<st.top();
}
