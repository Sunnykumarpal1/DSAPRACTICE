// Subarray Sum Equals K
 
//Given an array of integers nums and an integer k, return the total number of subarrays whose sum equals to k.

//A subarray is a contiguous non-empty sequence of elements within an array.
//Example 1:

//Input: nums = [1,1,1], k = 2
//Output: 2
//Example 2:

//Input: nums = [1,2,3], k = 3
//Output: 2
 

//Constraints:

//1 <= nums.length <= 2 * 104
//-1000 <= nums[i] <= 1000
//-107 <= k <= 107
//  here the approach is very easy
[1,-1,1,1,1] 
 0, 1,2,3,4
 // so here we use the intution of prefix sum 
//  the base case is that for example there are 1,1,1 is sum is 3 and k is also 3 . so if we try to find sum-k in map but there doesn't exist any value with zeto so it 
//   not added to result
 int subarraySum(vector<int>& nums, int k) {
        int sum=0;
        int n=nums.size();
        unordered_map<int,int>mp;
        mp[0]++;
        int count=0;
        for(auto i=0;i<n;i++){
            sum+=nums[i];
            if(mp.find(sum-k)!=mp.end()){
                count+=mp[sum-k];
                mp[sum]++;
            }else{
                mp[sum]++;
            }
        }
        return count;
    }
