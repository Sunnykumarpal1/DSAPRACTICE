 int countbits(int i){
       
        return((i%2==0)?0:1)+countbits(i/2);
    }
    
    int countSetBits(int n)
    {
        int total=0;
        for(auto i=1;i<=n;i++){
            total+=countbits(i);
        }
        return total;
    }
