/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<TreeNode*> Getall(int start,int end){
    vector<TreeNode*> sol;
    if(start>end) {
        sol.push_back(NULL);
        return sol;
    }
    for(int i=start;i<=end;i++){
        vector<TreeNode*> lefty=Getall(start,i-1);
        vector<TreeNode*> righty=Getall(i+1,end);
        for(TreeNode* left:lefty){//For every Node of Left Subtree.
            for(TreeNode* right:righty){
                TreeNode* node=new TreeNode(i);
                node->left=left;
                node->right=right;
                sol.push_back(node);
            }
        }
    }
    return sol;
}

vector<TreeNode*> Solution::generateTrees(int A) {
    return Getall(1,A);//To recur all left and right subtrees
}
