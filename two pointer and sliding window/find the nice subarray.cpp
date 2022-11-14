/*Given an array of integers nums and an integer k. A continuous subarray is called nice if there are k odd numbers on it.

Return the number of nice sub-arrays.

 

Example 1:

Input: nums = [1,1,2,1,1], k = 3
Output: 2
Explanation: The only sub-arrays with 3 odd numbers are [1,1,2,1] and [1,2,1,1].
Example 2:

Input: nums = [2,4,6], k = 1
Output: 0
Explanation: There is no odd numbers in the array.
Example 3:

Input: nums = [2,2,2,1,2,2,1,2,2,2], k = 2
Output: 16
 

Constraints:

1 <= nums.length <= 50000
1 <= nums[i] <= 10^5
1 <= k <= nums.length
*/ 
   so the brute force is same O(n^2) solution
//  optimal solution 
 TIME COMPLEXITY ->O(N)
 SPACE COMPLEXITY ->O(1)
// this is similar to subarray of sum k . we just need to focus on the odd numbers
int numberOfSubarrays(vector<int>& nums, int k) {
        int n=nums.size();
        int odd=0;
        unordered_map<int,int>mp;
        mp[0]++;
        int cnt=0;
        for(auto i=0;i<n;i++){
            if(nums[i]&1){
                odd++;
            }
            if(mp.find(odd-k)!=mp.end()){
                cnt+=mp[odd-k];
            }
            mp[odd]++;          
        }
        return cnt;
    }
