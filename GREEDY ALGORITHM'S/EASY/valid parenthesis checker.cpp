/*Given a string s containing only three types of characters: '(', ')' and '*', return true if s is valid.

The following rules define a valid string:

Any left parenthesis '(' must have a corresponding right parenthesis ')'.
Any right parenthesis ')' must have a corresponding left parenthesis '('.
Left parenthesis '(' must go before the corresponding right parenthesis ')'.
'*' could be treated as a single right parenthesis ')' or a single left parenthesis '(' or an empty string "".
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "(*)"
Output: true
Example 3:

Input: s = "(*))"
Output: true
 

Constraints:

1 <= s.length <= 100
s[i] is '(', ')' or '*'.
*/
 bool checkValidString(string s) {
        stack<int>openpar;
        stack<int>astreix;
        int n=s.size();
        for(auto i=0;i<n;i++){
            if(s[i]=='('){
                openpar.push(i);
            }else if(s[i]=='*'){
                astreix.push(i);
            }else {
                if(!openpar.empty()){
                    openpar.pop();
                } else if(!astreix.empty()){
                    astreix.pop();
                }else {
                    return 0;
                }
            }
        }
        while(!openpar.empty()&& !astreix.empty()){
            if(openpar.top()>astreix.top()) return 0;
            openpar.pop();
            astreix.pop();
        }
        return openpar.size()==0;
    }
