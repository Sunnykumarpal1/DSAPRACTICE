 int divide(int dividend, int divisor) {
         int sign=((dividend<0)^(divisor<0))?-1:1;
        long long divded=abs(dividend);
        long long  divior=abs(divisor);
         long long int quotient=0,temp=0;
        for(auto i=31;i>=0;i--){
            if(temp+(divior<<i)<=divded){
                quotient+=1LL<<i;
                temp+=divior<<i;
            }
        }
        cout<<sign<<endl;
        cout<<divior<<divded;
        if(sign==-1) quotient=-quotient;
        if(quotient>=INT_MAX){
            return INT_MAX;
        }
        else if(quotient<=INT_MIN){
            return INT_MIN;
        }
        return quotient;
    }
