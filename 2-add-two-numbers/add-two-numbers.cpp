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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {

        ListNode* dummy = new ListNode(-1);
        ListNode* mover = dummy;

        ListNode* t1 = l1;
        ListNode* t2 = l2;

        int carry = 0;

        while(t1 || t2)
        {
            int sum = carry;

            if(t1)
            {
                sum+=t1->val;
                t1 = t1->next;
            }

            if(t2)
            {
                sum+=t2->val;
                t2 = t2->next;
            }

            ListNode* newnode = new ListNode(sum%10);
            mover->next = newnode;
            carry = sum/10;
            mover = mover->next;
       
        }

        if(carry>0)
        {
            ListNode* newnode = new ListNode(carry);
            mover->next =  newnode;
        }

        return dummy->next; // new head;
        
    }
};