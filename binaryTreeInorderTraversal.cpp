void inorder(TreeNode* root,vector<int>&ans){
    if(root==NULL){
        return;
    }
    inorder(root->left,ans);
    ans.push_back(root->val);
    inorder(root->right,ans);
}
vector<int> solve(TreeNode* root){
//CODE HERE
vector<int>ans;
inorder(root,ans);
return ans; 
}
