int precedence(char a){
      if(a=='('){
          return -1;
      }else if(a=='^'){
          return 3;
      }else if(a=='*'||a=='/'){
          return 2;
      }else if(a=='+'||a=='-')
          return 1;
      
  }
    // Function to convert an infix expression to a postfix expression.
    string infixToPostfix(string s) {
        stack<char>st;
        string ans="";
        int n=s.size();
        for(auto i=0;i<n;i++){
            if(s[i]>='a'&& s[i]<='z'||s[i]>='0'&& s[i]<='9'||s[i]>='a'&& s[i]<='z'){
                ans+=s[i];
            }else if(s[i]=='('){
                st.push(s[i]);
            }else if(s[i]==')'){
                while(!st.empty()&& st.top()!='('){
                    char temp=st.top();
                    ans+=temp;
                    st.pop();
                }
                st.pop();
            }else if(s[i]=='+'||s[i]=='-'||s[i]=='/'||s[i]=='*'||s[i]=='^'){
                while(!st.empty() && precedence(st.top())>=precedence(s[i])){
                    char  t=st.top();
                    ans+=t;
                    st.pop();
                }
                st.push(s[i]);
            }
        }
        while(!st.empty()){
            char temp=st.top();
            ans+=temp;
            st.pop();
        }
        return ans;
        }
