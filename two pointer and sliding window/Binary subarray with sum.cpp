/*Given a binary array nums and an integer goal, return the number of non-empty subarrays with a sum goal.

A subarray is a contiguous part of the array.

 

Example 1:

Input: nums = [1,0,1,0,1], goal = 2
Output: 4
Explanation: The 4 subarrays are bolded and underlined below:
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
[1,0,1,0,1]
Example 2:

Input: nums = [0,0,0,0,0], goal = 0
Output: 15
 

Constraints:

1 <= nums.length <= 3 * 104
nums[i] is either 0 or 1.
0 <= goal <= nums.length
*/
// bruteforce approach O(n^2)
 int numSubarraysWithSum(vector<int>& nums, int goal) {
        int  cnt=0;
        int n=nums.size();
        for(auto i=0;i<n;i++){
           int  sum=0;
           for(auto j=i;j<n;j++){
              sum+=nums[j];
             if(sum==goal){
               cnt++;
             }
           }
        }
   return cnt;
 }
 // OPTIMIZED APPROACH USING O(N)
int numSubarraysWithSum(vector<int>& nums, int goal) {
        long long cnt=0;
        long long sum=0;
        int n=nums.size();
        unordered_map<int,int>mp;
         int i=0,j=0;
        mp[0]++;
        while(i<n){
            sum+=nums[i];
            if(mp.find(sum-goal)!=mp.end()){
                cnt+=mp[sum-goal];
            }
            mp[sum]++;
            i++;
        }
        return cnt;
    }
