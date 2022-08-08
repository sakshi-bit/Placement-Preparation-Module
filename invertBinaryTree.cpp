TreeNode* solve(TreeNode* root){
//CODE HERE 
if(root){
    solve(root->left);
    solve(root->right);
    swap(root->left,root->right);
}
return root;
}
