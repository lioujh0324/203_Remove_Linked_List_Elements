/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
typedef struct ListNode node;

struct ListNode* removeElements(struct ListNode* head, int val)
{
    node *current;
    
    while(head && head->val==val)
    {
        head=head->next;
    }
    if(head==NULL)
        return NULL;
    current=head;
    while(current && current->next)
    {
        while(current->next && current->next->val==val)
        {
            current->next=current->next->next;
        }
        current=current->next;
    }
    return head;
}
