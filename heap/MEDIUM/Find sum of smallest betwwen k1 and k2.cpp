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
tc->O(n log(n))
sc->O(k2-1)
