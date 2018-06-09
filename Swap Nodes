/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
ListNode* Solution::swapPairs(ListNode* A) {
    if(A==NULL||A->next==NULL) return A;
    ListNode *cur=A,*nxt=A->next;
    int temp;
    while(nxt){
        temp=cur->val;
        cur->val=nxt->val;
        nxt->val=temp;
        cur=nxt->next;
        nxt=cur?cur->next:0;
    }
    return A;
}
/*explanation:
    Take two pointers one is to point to 1st node and another one to point to next node.
    swap both data values/addresses.Then take change first pointer such that first=second->next;
    Take second as first->next if both are same else take as NULL;
*/
