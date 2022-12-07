void Inorder(vector<int>&ans,BinaryTreeNode* root){
    if(root==NULL){
        return ;
    }
    Inorder(ans,root->left);
    ans.push_back(root->data);
    Inorder(ans,root->right);
}
void PreOrder(vector<int>ans,BinaryTreeNode* root,int &ind){
    if(root==NULL){
        return ;
    }
    root->data=ans[ind];
    ind++;
    PreOrder(ans,root->left,ind);
    PreOrder(ans,root->right,ind);
    
}
BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
	vector<int>ans;
    Inorder(ans,root);
   BinaryTreeNode* temp=root;
    int ind=0;
    PreOrder(ans,root,ind);
    
    return temp;
}
