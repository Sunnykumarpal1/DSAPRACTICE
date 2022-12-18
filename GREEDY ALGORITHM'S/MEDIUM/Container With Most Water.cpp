/*Find two lines that together with the x-axis form a container, such that the container contains the most water.

Return the maximum amount of water a container can store.

Notice that you may not slant the container.

 

Example 1:


Input: height = [1,8,6,2,5,4,8,3,7]
Output: 49
Explanation: The above vertical lines are represented by array [1,8,6,2,5,4,8,3,7]. In this case, the max area of water (blue section) the container can contain is 49.
Example 2:

Input: height = [1,1]
Output: 1
 

Constraints:

n == height.length
2 <= n <= 105
0 <= height[i] <= 104
*/
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int left=0,right=n-1;
        int left_max=height[0],right_max=height[n-1];
        int ans=0;
        while(left<=right){
            if(height[left]<=height[right]){
                int temp=min(height[left],height[right]);
                int diff=right-left;
                ans=max(ans,temp*diff);
                left++;
            }else{
                int temp=min(height[left],height[right]);
                int diff=right-left;
                ans=max(ans,temp*diff);
                right--;
            }
        }
        return ans;
    }
};
