 int setBit(int N)
    {
    int t=N;
    int cnt=0;
     while(t){
         if((t&1)==0){
             N=1<<cnt|N;
             break;
         }
          t/=2;
         cnt++;
     }
     return N;
    }
