 bool Prime(int n){
	    
	    int cnt=0;
	    for(auto i=1;i*i<=n;i++){ 
	         if(n%i==0){
	             cnt++;
	         
	         if(n/i!=i){
	             cnt++;
	         }
	         }
	    }
	    if(cnt==2){
	        return 1;
	    }
	    return 0;
	}
	vector<int>AllPrimeFactors(int N) {
        vector<int>ans;
	    for(auto i=1;i*i<=N;i++){
	         if(N%i==0){
	             if(Prime(i)){
	                 ans.push_back(i);
	             }
	           
	       
	         if((N/i)!=i ){
	             if(Prime(N/i)) ans.push_back(N/i);
	         }
	       }
	         
	    }
	    return ans;
	}
