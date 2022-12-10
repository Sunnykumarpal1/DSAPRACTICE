/*Given an array, rotate the array to the right by k steps, where k is non-negative.

 

Example 1:

Input: nums = [1,2,3,4,5,6,7], k = 3
Output: [5,6,7,1,2,3,4]
Explanation:
rotate 1 steps to the right: [7,1,2,3,4,5,6]
rotate 2 steps to the right: [6,7,1,2,3,4,5]
rotate 3 steps to the right: [5,6,7,1,2,3,4]
Example 2:

Input: nums = [-1,-100,3,99], k = 2
Output: [3,99,-1,-100]
Explanation: 
rotate 1 steps to the right: [99,-1,-100,3]
rotate 2 steps to the right: [3,99,-1,-100]
 

Constraints:

1 <= nums.length <= 105
-231 <= nums[i] <= 231 - 1
0 <= k <= 105
 

Follow up:

Try to come up with as many solutions as you can. There are at least three different ways to solve this problem.
Could you do it in-place with O(1) extra space?
*/
BRUTE FORCE
ic:
    void rotate(vector<int>& nums, int k) {
        if(k==0) return ;
      int n=nums.size();
        if(k>n)
         k=k%n;
       vector<int>ans;
        for(auto i=n-k;i<n;i++){
            ans.push_back(nums[i]);
        }
        for(auto i=0;i<n-k;i++){
            ans.push_back(nums[i]);
        }
        for(auto i=0;i<n;i++){
            nums[i]=ans[i];
        }
    }
TC= o(N)
SC =o(N)
  //OPTIMAL
  void rotate(vector<int>& nums, int k) {
        int n=nums.size();
        if(k>n) k=k%n;
        if(k==0){
            return ;
        }
        reverse(nums.begin(),nums.end()-k);
         
        reverse(nums.end()-k,nums.end());
        reverse(nums.begin(),nums.end());
    }
TC=O(N)
SC=O(1)
