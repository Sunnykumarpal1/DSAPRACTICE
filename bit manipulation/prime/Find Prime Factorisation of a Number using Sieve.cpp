#include<bits/stdc++.h>
using namespace std;
int n=1000000;
vector<int>spf(n+1,1);
void CreateSeive(){
    for(auto i=1;i<=n;i++){
        spf[i]=i;
    }
    for(auto i=2;i*i<=n;i++){
       if(spf[i]==i){
         for(auto j=i*i;j<=n;j+=i){
            if(spf[j]==j){
                spf[j]=i;
            }
         }  
        }
    }
}
int main()
{
    CreateSeive();
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
      while(n!=1){
        cout<<spf[n];
        n=n/spf[n];
      }
    }
}
