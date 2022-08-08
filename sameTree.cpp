int solve(TreeNode* p, TreeNode* q){
//CODE HERE 
if((q && !p) || (p && !q)){
    return 0;
}
if(!p && !q){
    return 1;
}
if(p->val==q->val && solve(p->left,q->left)&& solve(p->right,q->right)){
    return 1;
}
return 0;
}
