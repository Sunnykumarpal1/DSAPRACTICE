 public:
    bool isMaxHeap(int a[], int n)
    {
         for(auto i=0;i<n/2;i++){
             if(a[2*i+1]>a[i]||a[2*i+2]>a[i]){
                 return 0;
             }
         }
         return 1;
    }
