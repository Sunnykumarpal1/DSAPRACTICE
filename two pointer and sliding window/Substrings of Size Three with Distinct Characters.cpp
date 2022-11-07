// so here the  question is very simple just find the number of string of size k can be formed where all the character are unique;

int countGoodSubstrings(string s) {
        deque<char>dq;
        unordered_map<char,int>mp;
        int GoodString=0;
        bool flag=0;
        for(auto i=0;i<3;i++){
            if(mp.find(s[i])!=mp.end()){
                flag=1;
            }
          dq.push_back(s[i]);
          mp[s[i]]++;
        }
        if(flag==0){
           GoodString++;
        }
        int n=s.size();
        for(auto i=3;i<n;i++){
          char ch=dq.front();
           // cout<<ch;
           dq.pop_front();
           mp[ch]--;
           // cout<<endl<<mp[ch]<<s[i];
           if((mp.find(s[i])==mp.end())&&mp[dq.front()]==1&&mp[dq.back()]==1){
                GoodString++;
             }else if((mp.find(s[i])!=mp.end())&&mp[dq.front()]==1&&mp[dq.back()]==1){
             int ele=mp[s[i]];
               if(ele==0){
                  GoodString++;
                  }
               }
             mp[s[i]]++;
             dq.push_back(s[i]);
        }
        return GoodString;
    }
