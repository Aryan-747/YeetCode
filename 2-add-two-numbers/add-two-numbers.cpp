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

        int carry = 0;

        ListNode* nn = new ListNode(-1);


        ListNode* t1 = l1;
        ListNode* t2 = l2;

        ListNode* temp = nn;

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
            
            int digit = sum%10;
            carry = sum/10;
            

            ListNode* newnode = new ListNode(digit);
            temp->next = newnode;
            temp = newnode;
        }

        // still a digit is left
        if(carry>0)
        {
            ListNode* newnode = new ListNode(carry);
            temp->next = newnode;
        }
        

        return nn->next; // new head
    }
};