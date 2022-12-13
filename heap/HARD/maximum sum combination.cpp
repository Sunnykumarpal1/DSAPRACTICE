/* Given two integer array A and B of size N each.
A sum combination is made by adding one element from array A and another element of array B.
Return the maximum K valid distinct sum combinations from all the possible sum combinations.

Note : Output array must be sorted in non-increasing order.

Example 1:

Input:
N = 2
C = 2
A [ ] = {3, 2}
B [ ] = {1, 4}
Output: {7, 6}
Explanation: 
7 -> (A : 3) + (B : 4)
6 -> (A : 2) + (B : 4)
Example 2:

Input:
N = 4
C = 3
A [ ] = {1, 4, 2, 3}
B [ ] = {2, 5, 1, 6}
Output: {10, 9, 9}
Explanation: 
10 -> (A : 4) + (B : 6)
9 -> (A : 4) + (B : 5)
9 -> (A : 3) + (B : 6)
 

Your Task:
You don't need to read input or print anything. Your task is to complete the function maxCombinations() which takes the interger N,integer K and two integer arrays A [ ] and B [ ] as parameters and returns the maximum K valid distinct sum combinations .

Expected Time Complexity: O(Klog(N))
Expected Auxiliary Space: O(N)

Constraints:
1 ≤ N ≤  105
1 ≤ K ≤  N
1 ≤ A [ i ] , B [ i ] ≤ 1000
*/
static bool comp(int a,int b){
      if(a>b)
         return 1;
      return 0;
  }
    vector<int> maxCombinations(int N, int k, vector<int> &A, vector<int> &B) {
          vector<int>ans;
          sort(A.begin(),A.end(),comp);
          sort(B.begin(),B.end(),comp);
          priority_queue<pair<int,pair<int,int>>>pq;
          pq.push({A[0]+B[0],{0,0}});
          set<pair<int,int>>st;
          for(auto i=0;i<k;i++){
              pair<int,pair<int,int>>p=pq.top();
              ans.push_back(p.first);
              pq.pop();
              if(p.second.first+1<A.size()&&st.find({p.second.first+1,p.second.second})==st.end()){
                  pq.push({A[p.second.first+1]+B[p.second.second],{p.second.first+1,p.second.second}});
                  st.insert({p.second.first+1,p.second.second});
              }
              if(p.second.second+1<A.size()&& st.find({p.second.first,p.second.second+1})==st.end()){
                  pq.push({A[p.second.first]+B[p.second.second+1],{p.second.first,p.second.second+1}});
                  st.insert({p.second.first,p.second.second+1});
              }
          }
          return ans;
    }
