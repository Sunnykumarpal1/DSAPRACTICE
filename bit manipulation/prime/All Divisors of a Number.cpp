#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int n;
    cin>>n;
    vector<int>ans;
    for(auto i=1;i*i<=n;i++){
       if(n%i==0){
           ans.push_back(i);
           if(n/i!=i) ans.push_back(n/i);
       }

    }
    for(auto i:ans){
        cout<<i<<" ";
    }
}
