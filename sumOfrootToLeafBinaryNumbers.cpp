int sumOfBinaryNumbers(TreeNode* root,int sum){
    int ans;
    if(root==NULL){
        return 0;
    }
    if(root){
        ans = (2*sum)+root->val;
    }
    if(!root->left && !root->right){
        return ans;
    }else{
        return sumOfBinaryNumbers(root->left,ans)+sumOfBinaryNumbers(root->right,ans);
    }
    return 0;
}
int solve(TreeNode* root){
//CODE HERE 
return sumOfBinaryNumbers(root,0);
}
