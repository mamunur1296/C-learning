/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int size(ListNode * head)
    {
        ListNode * tmp = head;
        int count=0;
        while(tmp != NULL)
        {
            count++;
            tmp=tmp->next;
        }
        return count;
    }
    ListNode* middleNode(ListNode* head) {
        int sz=size(head);
        for(int i=0 ; i<sz/2;i++)
        {
            head=head->next;
        }
        return head;
    }
};