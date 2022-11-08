// Given an array of positive and negative numbers. Find if there is a subarray (of size at-least one) with 0 sum.

// Example 1:

// Input:
// 5
// 4 2 -3 1 6

// Output: 
// Yes

// Explanation: 
// 2, -3, 1 is the subarray 
// with sum 0.
// Example 2:

// Input:
// 5
// 4 2 0 1 6

// Output: 
// Yes

// Explanation: 
// 0 is one of the element 
// in the array so there exist a 
// subarray with sum 0.
bool subArrayExists(int arr[], int n)
    {
         unordered_map<int,int>mp;
         int sum=0;
        for(auto i=0;i<n;i++){
            sum+=arr[i];
            if((mp.find(sum)!=mp.end())||sum==0||arr[i]==0){
                return 1;
            }
            mp[sum]++;
        }
        return 0;
    }
