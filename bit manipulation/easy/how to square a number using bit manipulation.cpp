
//  1 st approach 
#include<bits/stdc++.h>
using namespace std;
int Square(int x){
    if(x==0)return 0;
    if(x<0)x=-x;
    // for odd
    int res=0;
    //  here using 4 bez since odd value for =(2x+1)
    //  and squre of odd is (2x+1)^2=4x^2+4x+1
    //  even square is 4x
    if(x&1){
//         res=4*Square(x>>1)+4*Squate(x>>1)+1
       res= 4*Square(x/2)+4*Square(x/2)+1;
    }else{
//         res=4*Square(x>>1)
        res=4*Square(x/2);
    }
    return res;
}
int main(){
    int val=4;
    // here we need to find square of a number
   cout<< Square(val);
}
//  2nd approach ->thsi approch is also done at O(logn)
algo -> here we will checking if the bit is 1 then we will find the power of the bit 
int Square(int x){
   int power=0,temp=x;
   int res=0;
    while(temp){
     if(temp&1){
       res+=(x<<power);
       }
       power++;
       temp=temp>>1;
       }
       cout<<res;
    }
