 long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
         long long  ele=K2-1;
         priority_queue<int>pq;
         for(auto i=0;i<ele;i++){
             pq.push(A[i]);
         }
         for(auto i=ele;i<N;i++){
             if(A[i]<pq.top()){
                 pq.pop();
                 pq.push(A[i]);
             }
         }
         long long remove=K2-K1-1;
         long long sum=0;
         while(remove){
             sum+=pq.top();
             pq.pop();
             remove--;
         }
         return sum;
    }
or 
 long long KthSmallest(long long a[],long long  k,long long  n){
        priority_queue<long long >pq;
        for(auto i=0;i<k;i++){
            pq.push(a[i]);
        }
        for(auto i=k;i<n;i++){
            if(a[i]<pq.top()){
                pq.pop();
                pq.push(a[i]);
            }
        }
        return pq.top();
    }
    long long sumBetweenTwoKth( long long A[], long long N, long long K1, long long K2)
    {
          long long first=KthSmallest(A,K1,N),second=KthSmallest(A,K2,N);
        
         long long sum=0;
         for(auto i=0;i<N;i++){
             if(A[i]>first&&A[i]<second){
                 sum+=A[i];
             }
         }
         return sum;
    }
tc->O(n log(n))
sc->O(k2-1)
