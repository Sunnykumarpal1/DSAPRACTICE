// Given an unsorted array A of size N that contains only non-negative integers, find a continuous sub-array which adds to a given number S.

// In case of multiple subarrays, return the subarray which comes first on moving from left to right.

 

// Example 1:

// Input:
// N = 5, S = 12
// A[] = {1,2,3,7,5}
// Output: 2 4
// Explanation: The sum of elements 
// from 2nd position to 4th position 
// is 12.
 

// Example 2:

// Input:
// N = 10, S = 15
// A[] = {1,2,3,4,5,6,7,8,9,10}
// Output: 1 5
// Explanation: The sum of elements 
// from 1st position to 5th position
// is 15.
 vector<int> subarraySum(int arr[], int n, long long s)
    {
        int j=0;
        long long sum=0;
        vector<int>ans;
        for(auto i=0;i<n;i++){
           sum+=arr[i];
            while(sum>s&& j<i){
               sum-=arr[j];
               j++;
           }
           if(sum==s){
               ans.push_back(j+1);
               ans.push_back(i+1);
               break;
           }
        }
        if(ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
    }
