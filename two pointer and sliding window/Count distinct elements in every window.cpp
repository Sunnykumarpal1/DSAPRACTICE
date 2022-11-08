// Given an array of integers and a number K. Find the count of distinct elements in every window of size K in the array.

// Example 1:

// Input:
// N = 7, K = 4
// A[] = {1,2,1,3,4,2,3}
// Output: 3 4 4 3
// Explanation: Window 1 of size k = 4 is
// 1 2 1 3. Number of distinct elements in
// this window are 3. 
// Window 2 of size k = 4 is 2 1 3 4. Number
// of distinct elements in this window are 4.
// Window 3 of size k = 4 is 1 3 4 2. Number
// of distinct elements in this window are 4.
// Window 4 of size k = 4 is 3 4 2 3. Number
// of distinct elements in this window are 3.
// Example 2:

// Input:
// N = 3, K = 2
// A[] = {4,1,1}
// Output: 2 1
// Expected Time Complexity: O(N).
// Expected Auxiliary Space: O(N).

// Constraints:
// 1 <= K <= N <= 105
// 1 <= A[i] <= 105 , for each valid 
vector <int> countDistinct (int A[], int n, int k)
    {
        int distinct=0;
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto i=0;i<k;i++){
            if(mp.find(A[i])==mp.end()){
                distinct++;
            }
            mp[A[i]]++;
        }
        ans.push_back(distinct);
         int j=0;
          
        for(auto i=k;i<n;i++){
            int ele=A[j];
            if(mp[ele]==1){
                distinct--;
            }
            j++;
            mp[ele]--;
            if(mp.find(A[i])==mp.end()||mp[A[i]]==0){
                distinct++;
            }
            mp[A[i]]++;
            ans.push_back(distinct);
        }
         return ans;
    }
