double myPow(double x, int n) {
//    here we just need to handle when n is negative
        double ans=1.0;
        long long nn=n;
        if(nn<0)
            nn=-1*nn;
        while(nn){
            if(nn%2==0){
                x=x*x;
                nn=nn/2;
            }else{
                ans=ans*x;
                nn=nn-1;
            }
        }
        if(n<0){
            ans=(double)1/double(ans);
        }
        return ans;
    }
