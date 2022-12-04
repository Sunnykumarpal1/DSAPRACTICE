/*
Given an integer array nums and an integer k, return the k most frequent elements. You may return the answer in any order.

 

Example 1:

Input: nums = [1,1,1,2,2,3], k = 2
Output: [1,2]
Example 2:

Input: nums = [1], k = 1
Output: [1]
 

Constraints:

1 <= nums.length <= 105
-104 <= nums[i] <= 104
k is in the range [1, the number of unique elements in the array].
It is guaranteed that the answer is unique.
*/
//  just using maps
 static bool comp(pair<int,int>p1,pair<int,int>p2){
        if(p1.second>p2.second)return 1;
        
        return 0;
    }
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>pr;
        for(auto i:mp){
           pr.push_back(i);
        }
        sort(pr.begin(),pr.end(),comp);
        for(auto i:pr){
            cout<<i.first<<" "<<i.second<<endl;
        }
        vector<int>ans;
        for(auto i=0;i<k;i++){
            ans.push_back(pr[i].first);
        }
        return ans;
    }
// using heaps
  vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(auto i:nums){
            mp[i]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto i:mp){
            pq.push({i.second,i.first});
        }
        vector<int>ans;
        while(!pq.empty()&&k>0){
            ans.push_back(pq.top().second);
            pq.pop();
            k--;
        }
        return ans;
    }
