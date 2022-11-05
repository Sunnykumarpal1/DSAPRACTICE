include<bits/stdc++.h>
using namespace std;
int main()
{
    //  prefix to postfix expresstion
    //  here the algorithm is very easy
    //  1 . reverse the string
    //  then traverse the string fron left to right whenever operand is encountered then push into stack 
    // and when ever operator is encountered then pop top 2 elements and  and convert them into top1 +top2+operator
    //  and push into stack
    string s="*-a/bc-/akl";
    reverse(s.begin(),s.end());
    cout<<s<<endl;
    int n=s.size();
    stack<string>st;
    for(auto i=0;i<n;i++){
         if(s[i]>='a'&& s[i]<='z'||s[i]>='A'&& s[i]<='Z'|| s[i]>='0'&& s[i]<='9'){
            string temp="";
            temp+=s[i];
            
            st.push(temp);
           
             
         }else {
    cout<<s[i]<<endl;
              
        
                string a=st.top();
                st.pop();
                string b=st.top();
                st.pop();
                 char temp=s[i];
                 
                st.push(a+b+temp);
               cout<<st.top();
               cout<<endl;
             
         }
    }
    string ans=st.top();
    cout<<ans;
     
}
