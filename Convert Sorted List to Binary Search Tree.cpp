/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

//function to get length of Linked list.
int countNodes(ListNode* A){
    ListNode* current=A;
    int count=0;
    while(current){
        current=current->next;
        count++;
    }
    return count;
}

ListNode* head;
//To get Height Balanced BST from Linked List \
given by using the method of Inorder Traversal(Left,Root,Right)
TreeNode* S2B(int n,ListNode* A){
    if(n<=0) return NULL;
    head=A;
    TreeNode* left=S2B(n/2,head);
    TreeNode* root=new TreeNode(head->val);
    root->left=left;
    head=head->next;
    root->right=S2B(n-n/2-1,head);
    return root;
}

TreeNode* Solution::sortedListToBST(ListNode* A) {
    int n=countNodes(A);
    return S2B(n,A);
}
