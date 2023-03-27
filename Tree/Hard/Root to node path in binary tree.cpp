 bool GetPath(treenode* root,int value,vector<int>&ans){
     if(root==NULL){
         return 0;
     }
     ans.push_back(root->val);
      if(root->val==val){
          return 1;
      }
 
     if(GetPath(root->left,val)||GetPath(root->right,val))
       return 1;
    ans.pop_back();
  return 0;
 }
vector<int> solve(treenode* A, int B) {
    vector<int>ans;
     if(root==NULL)return ans;
     GetPath(A,B,ans);
     return ans;
   }
