 int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int cnt=0;
        int mx=0;
        for(auto i=1;i<n;i++){
            if(nums[i]==(nums[i-1]+1)){
                 cnt+=1;
            }else if(nums[i]==nums[i-1]){
                continue;
            }else{
                cnt=0;
            }
            mx=max(mx,cnt);
        }
        cout<<mx;
        mx++;
        return mx;
    }
