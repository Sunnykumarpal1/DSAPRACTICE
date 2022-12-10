/*Alice has some number of cards and she wants to rearrange the cards into groups so that each group is of size groupSize, and consists of groupSize consecutive cards.

Given an integer array hand where hand[i] is the value written on the ith card and an integer groupSize, return true if she can rearrange the cards, or false otherwise.

 

Example 1:

Input: hand = [1,2,3,6,2,3,4,7,8], groupSize = 3
Output: true
Explanation: Alice's hand can be rearranged as [1,2,3],[2,3,4],[6,7,8]
Example 2:

Input: hand = [1,2,3,4,5], groupSize = 4
Output: false
Explanation: Alice's hand can not be rearranged into groups of 4.

 

Constraints:

1 <= hand.length <= 104
0 <= hand[i] <= 109
1 <= groupSize <= hand.length
*/
bool isNStraightHand(vector<int>& hand, int groupSize) {
        if(hand.size()%groupSize!=0){
            return 0;
        }
        unordered_map<int,int>mp;
        for(auto i=0;i<hand.size();i++){
            mp[hand[i]]++;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        for(auto i:mp ){
            pq.push(i.first);
        }
          while(pq.size()>0){
            int val=pq.top();
        for(auto i=val;i<val+groupSize;i++){
            if(mp.find(i)!=mp.end()){
                mp[i]--;
                if(mp[i]==0){
                    mp.erase(i);
                    pq.pop();
                }
            }else{
                return 0;
            } 
        }
      }
        return 1;
        
    }
