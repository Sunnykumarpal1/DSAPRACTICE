/*You are given an array Arr of size N. You have to find the K-th largest sum of contiguous subarray within the array elements.

 

Example 1:

Input:
N = 3
K = 2
Arr = {3,2,1}
Output:
5
Explanation:
The different subarray sums we can get from the array
are = {6,5,3,2,1}. Where 5 is the 2nd largest.
 

Example 2:

Input:
N = 4
K = 3
Arr = {2,6,4,1}
Output:
11
Explanation:
The different subarray sums we can get from the array
are = {13,12,11,10,8,6,5,4,2,1}. Where 11 is the 3rd largest.
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function kthLargest() which takes the array Arr[] and its size N as inputs and returns the Kth largest subarray sum.

 

Expected Time Complexity: O(N2 * log K)
Expected Auxiliary Space: O(K)

 

Constraints:
1 <= N <= 100
1 <= K <= (N*(N+1))/2
-105 <= Arr[i] <= 105
Sum of N over all test cases doesn't exceed 1000.
Array may contain duplicate elements.
*/
 
 BRUTE FORCE BECAUSE HERE WE ARE USING (N^2) SPACE i.e the array
    int kthLargest(vector<int> &Arr,int N,int K){
        vector<int>ans;
        for(auto i=0;i<N;i++){
            int sum=0;
            for(auto j=i;j<N;j++){
                sum+=Arr[j];
                ans.push_back(sum);
            }
        }
        priority_queue<int,vector<int>,greater<int>>Maxheap;
        int size=ans.size();
        for(auto i=0;i<K;i++){
            Maxheap.push(ans[i]);
        }
        for(auto i=K;i<size;i++){
            if(Maxheap.top()<ans[i]){
                Maxheap.pop();
                Maxheap.push(ans[i]);
            }
        }
        return Maxheap.top();
    }
 
//optimal  approach

 int kthLargest(vector<int> &Arr,int N,int K){
        
        priority_queue<int,vector<int>,greater<int>>Maxheap;
        
        for(auto i=0;i<N;i++){
            int sum=0;
            for(auto j=i;j<N;j++){
                sum+=Arr[j];
                if(Maxheap.empty()||Maxheap.size()<K){
                    Maxheap.push(sum);
                }else if(Maxheap.size()>=K){
                    if(sum>Maxheap.top()){
                        Maxheap.pop();
                        Maxheap.push(sum);
                    }
                }
            }
        }
        return Maxheap.top();
         
    }
// here in this we are just using O(k) space so this is the most optimal approach to find










