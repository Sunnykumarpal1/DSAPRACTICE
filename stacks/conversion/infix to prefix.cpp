#include<bits/stdc++.h>
using namespace std;
bool isOperator(char a){
    if(a=='+'|| a=='-'||a=='*'||a=='/'||a=='^'){
        return 1;
    }
    return 0;
}
int Presedence(char a){
    if(a =='+'||a=='-'){
        return 1;
    }else if(a=='*'||a=='/'){
        return 2;
    }else if(a=='^'){
        return 3;
    }
    return 0;
}
int main(){
    string s="K+L-M*N+(O^P)*W/U/V*T+Q";
    int n=s.size();
    string ans(n,'a');
    int ind=0;
    
    for(auto i=n-1;i>=0;i--){
        ans[ind++]=s[i];
    }
   
    string res="";
    stack<char>st;
    cout<<ans<<endl;
    for(auto i=0;i<n;i++){
         
        if(ans[i]>='A'&& ans[i]<='Z'){
           res+=ans[i];
        }else if(ans[i]==')'){
            
         st.push(ans[i]);
        }else if(ans[i]=='('){
            
            while(st.top()!=')'){
                
                res+=st.top();
                st.pop();
            }
            st.pop();
        }else if(isOperator(ans[i])){
         if(ans[i]=='^'){
             
            while(!st.empty()&& Presedence(st.top())>=Presedence(ans[i])){
                res+=st.top();
               st.pop();
            }
            st.push(ans[i]);
        } else{
             while(!st.empty()&& Presedence(st.top())>Presedence(ans[i])){
                res+=st.top();
                st.pop();
              }
             st.push(ans[i]);
           }
             }
          }
 
      while(!st.empty()){
        res+=st.top();
        st.pop();
      }
       reverse(res.begin(),res.end());
       cout<<res;
     }
