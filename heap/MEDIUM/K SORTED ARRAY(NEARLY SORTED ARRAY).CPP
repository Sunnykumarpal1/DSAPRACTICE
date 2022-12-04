/*Given an array of n elements, where each element is at most k away from its target position, you need to sort the array optimally.

Example 1:

Input:
n = 7, k = 3
arr[] = {6,5,3,2,8,10,9}
Output: 2 3 5 6 8 9 10
Explanation: The sorted array will be
2 3 5 6 8 9 10
Example 2:

Input:
n = 5, k = 2
arr[] = {3,1,4,2,5}
Output: 1 2 3 4 5 
Note: DO NOT use STL sort() function for this question.

Your Task:
You are required to complete the method nearlySorted() which takes 3 arguments and returns the sorted array.

Expected Time Complexity : O(nlogk)
Expected Auxilliary Space : O(n)

Constraints:
1 ≤ n ≤ 106
1 ≤ k < n
1 ≤ arri ≤ 107
*/
//  BRUTE FORRCE USING SORT FUNCTION
tc->O(n logn)
sc->O(1)
      vector <int> nearlySorted(int arr[], int num, int K){
        sort(arr,arr+num);
        return arr;
      }
//  optimized approach is 

vector <int> nearlySorted(int arr[], int num, int K){
      priority_queue<int,vector<int>,greater<int>>pq;
      int i=0;
      vector<int>ans;
      while(i<num){
           pq.push(arr[i++]);
          if(pq.size()<=K){
              continue;
          }else{
              ans.push_back(pq.top());
              pq.pop();
          }
        
      }
      while(!pq.empty()){
          ans.push_back(pq.top());
          pq.pop();
      }
      return ans;
    }
/*description
here we know that this is nearly sorted array means element for the paricular index can be either in atmost k element to it's left or k element to it's right 
so it's a solution is sorted (i.e we every time take the minimum element in k element ) . if we use the sorting algorithm we are sorting N elements N times.
but by the above algorithm we sort k elements every time.
