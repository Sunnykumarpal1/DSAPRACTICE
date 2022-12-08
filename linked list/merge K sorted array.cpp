class comp{
    public: bool operator()(ListNode* a,ListNode* b){
         return a->val>b->val;
     }
 };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*,vector<ListNode*>,comp>pq;
        for(auto i:lists){
            if(i){
                pq.push(i);
            }
        }
        ListNode* dummy=new ListNode(0);
        ListNode* ptr=dummy;
        while(!pq.empty()){
          ListNode* t=pq.top();
          pq.pop();
          ptr->next=t;
          ptr=ptr->next;
          ptr->next=NULL;
          if(t->next!=NULL){
              t=t->next;
              pq.push(t);
          }
        }
       return  dummy->next;
    }
};
