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
       res= 4*Square(x/2)+4*Square(x/2)+1;
    }else{
        res=4*Square(x/2);
    }
    return res;
}
int main(){
    int val=4;
    // here we need to find square of a number
   cout<< Square(val);
}
