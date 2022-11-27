   void moveZeroes(vector<int>& nums) {
        int i=0,j=-1;
        int n=nums.size();
        while(i<n){
            if(nums[i]!=0){
                j++;
                nums[j]=nums[i];
                if(i!=j){
                    nums[i]=0;
                }   
            }
            i++;
        }
