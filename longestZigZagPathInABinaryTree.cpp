int f(TreeNode* root,int k,bool isleft){
    if(root)
        if(isleft)
            return max(f(root->left,1,true),f(root->right,k+1,false));
        else
            return max(f(root->left,k+1,true),f(root->right,1,false));
    return k-1;
}
int solve(TreeNode* root){
//CODE HERE 
return f(root,0,true);
}
