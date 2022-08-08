void preorder(TreeNode* root,vector<int>&ans){
if(root==NULL){
    return;
}
ans.push_back(root->val);
preorder(root->left,ans);
preorder(root->right,ans);
}
vector<int> solve(TreeNode* root){
//CODE HERE
vector<int>ans;
preorder(root,ans);
return ans; 
}
