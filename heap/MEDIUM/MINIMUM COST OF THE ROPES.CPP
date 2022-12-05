 long long minCost(long long arr[], long long n) {
        long long ans=0;
        priority_queue<long long ,vector<long long >,greater<long long>>pq;
        for(auto i=0;i<n;i++){
            pq.push(arr[i]);
        }
        
        while(pq.size()>=2){
            long long first=pq.top();
            pq.pop();
           long long second=pq.top();
            pq.pop();
            ans=ans+first+second;
            pq.push(first+second);
        }
        return ans;
    }
TC->o(N LOG(N))
SC->O(N)
