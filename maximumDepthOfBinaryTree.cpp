int solve(TreeNode* root){
//CODE HERE 
if(!root)
return 0;
int left = solve(root->left);
int right = solve(root->right);
return max(left,right)+1;
}
