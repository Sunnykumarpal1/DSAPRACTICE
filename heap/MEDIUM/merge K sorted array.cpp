
/*Given K sorted arrays arranged in the form of a matrix of size K*K. The task is to merge them into one sorted array.
Example 1:

Input:
K = 3
arr[][] = {{1,2,3},{4,5,6},{7,8,9}}
Output: 1 2 3 4 5 6 7 8 9
Explanation:Above test case has 3 sorted
arrays of size 3, 3, 3
arr[][] = [[1, 2, 3],[4, 5, 6], 
[7, 8, 9]]
The merged list will be 
[1, 2, 3, 4, 5, 6, 7, 8, 9].
Example 2:

Input:
K = 4
arr[][]={{1,2,3,4}{2,2,3,4},
         {5,5,6,6},{7,8,9,9}}
Output:
1 2 2 2 3 3 4 4 5 5 6 6 7 8 9 9 
Explanation: Above test case has 4 sorted
arrays of size 4, 4, 4, 4
arr[][] = [[1, 2, 2, 2], [3, 3, 4, 4],
[5, 5, 6, 6]  [7, 8, 9, 9 ]]
The merged list will be 
[1, 2, 2, 2, 3, 3, 4, 4, 5, 5, 
6, 6, 7, 8, 9, 9 ].
Your Task:
You do not need to read input or print anything. Your task is to complete mergeKArrays() function which takes 2 arguments, an arr[K][K] 2D Matrix containing K sorted arrays and an integer K denoting the number of sorted arrays, as input and returns the merged sorted array ( as a pointer to the merged sorted arrays in cpp, as an ArrayList in java, and list in python)

Expected Time Complexity: O(K2*Log(K))
Expected Auxiliary Space: O(K2)

Constraints:
1 <= K <= 100
*/ brute force
 class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i=0;i<K;i++){
            for(auto j=0;j<K;j++){
                pq.push(arr[i][j]);
            }
        }
        vector<int>ans;
        while(!pq.empty()){
            ans.push_back(pq.top());
            pq.pop();
        }
        return ans;
    }
};
//  solution 2)
class data{
   public: int val;
       int arrInd;
       int colInd;
       data(int value,int arrno,int Ind){
           val=value;
            arrInd=arrno;
           colInd=Ind;
       }
};
struct Mycom{
bool operator()(data &a,data &b){
           return a.val>b.val;
}
};





 
class Solution
{
        
    public:
        
        
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
          priority_queue<data,vector<data>,Mycom>pq;
          for(auto i=0;i<K;i++){
            data temp(arr[i][0],i,0);
             pq.push(temp);
          }
          vector<int>ans;
          while(!pq.empty()){
              data d=pq.top();
              pq.pop();
              int value=d.val;
              int arrval=d.arrInd;
              int index=d.colInd;
              ans.push_back(value);
              if((index+1)<arr[arrval].size()){
                  data d(arr[arrval][index+1],arrval,index+1);
                  pq.push(d);
              }
          }
          return ans;
        
    }
};
