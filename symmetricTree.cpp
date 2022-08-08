int symmetric(TreeNode* rl,TreeNode* rr){
if(!rl && !rr){
    return 1;
}
if(!rl || !rr || (rl->val!=rr->val)){
    return 0;
}
return symmetric(rl->left,rr->right) && symmetric(rl->right,rr->left);
}
int solve(TreeNode* root){
//CODE HERE 
return symmetric(root->left,root->right);
}
