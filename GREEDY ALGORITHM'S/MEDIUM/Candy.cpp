/*There are n children standing in a line. Each child is assigned a rating value given in the integer array ratings.

You are giving candies to these children subjected to the following requirements:

Each child must have at least one candy.
Children with a higher rating get more candies than their neighbors.
Return the minimum number of candies you need to have to distribute the candies to the children.

 

Example 1:

Input: ratings = [1,0,2]
Output: 5
Explanation: You can allocate to the first, second and third child with 2, 1, 2 candies respectively.
Example 2:

Input: ratings = [1,2,2]
Output: 4
Explanation: You can allocate to the first, second and third child with 1, 2, 1 candies respectively.
The third child gets 1 candy because it satisfies the above two conditions.
 

Constraints:

n == ratings.length
1 <= n <= 2 * 104
0 <= ratings[i] <= 2 * 104
*/
 int candy(vector<int>& rat) {
 // The approach is that if the element is greater then it's right then it's value should be greater it and if the element is greater then to it's left then candies given to the element should greater then that. 
// so if the element is greater then both left and right then it should be maximum of left and right +1
     int n=rat.size();
     vector<int>left(n,1);
     vector<int>right(n,1);
     // for left 
     for(auto i=1;i<n;i++){
         if(rat[i]>rat[i-1]){
             left[i]=left[i-1]+1;
         }
     }
     // for right
      for(auto i=n-2;i>=0;i--){
         if(rat[i]>rat[i+1])
         right[i]=right[i+1]+1;
       }
       int total=0;
       for(auto i=0;i<n;i++){
           total+=max(left[i],right[i]);
       }

     return total;

    }
