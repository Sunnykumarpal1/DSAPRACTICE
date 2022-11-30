 int setSetBit(int x, int y, int l, int r){
              for(auto i=l;i<=r;i++){
                  int k=(1<<(i-1))&y;
                  x|=k;
              }
              return x;
          
    }
