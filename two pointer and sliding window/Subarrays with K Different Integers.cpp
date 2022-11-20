/*Given an integer array nums and an integer k, return the number of good subarrays of nums.

A good array is an array where the number of different integers in that array is exactly k.

For example, [1,2,3,1,2] has 3 different integers: 1, 2, and 3.
A subarray is a contiguous part of an array.

 

Example 1:

Input: nums = [1,2,1,2,3], k = 2
Output: 7
Explanation: Subarrays formed with exactly 2 different integers: [1,2], [2,1], [1,2], [2,3], [1,2,1], [2,1,2], [1,2,1,2]
Example 2:

Input: nums = [1,2,1,3,4], k = 3
Output: 3
Explanation: Subarrays formed with exactly 3 different integers: [1,2,1,3], [2,1,3], [1,3,4].
 

Constraints:

1 <= nums.length <= 2 * 104
1 <= nums[i], k <= nums.length
*/
 brute force o(n^2)
 optimal approach tc-> O(n)
                  sc->O(n)-
 int Count(vector<int>nums,int k){
        int i=0,j=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        int res=0;
          for(auto j=0;j<n;j++){
            if(mp.find(nums[j])==mp.end()){
               k--;
            }
            mp[nums[j]]++;
              if(k<0){
                 while(k<0){
                   mp[nums[i]]--;
                    if(mp[nums[i]]==0){
                      mp.erase(nums[i]);
                      k++;
                    }
                      i++;
                    }
              }
            res+=j-i+1;
        }
        return res;
    }
    int subarraysWithKDistinct(vector<int>& nums, int k) {
          return Count(nums,k)-Count(nums,k-1);
    }
