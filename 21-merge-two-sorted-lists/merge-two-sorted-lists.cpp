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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {


        ListNode* dummy = new ListNode(-1);
        ListNode* mover = dummy;
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        // condition

        while(t1!=nullptr && t2!=nullptr)
        {
            if(t1->val < t2->val)
            {
                mover->next = t1;
                t1 = t1->next;
                mover = mover->next;
            }

            else
            {
                mover->next = t2;
                t2 = t2->next;
                mover = mover->next;
            }
        }

        // if t1 is still left
        if(t1)
        {
            mover->next = t1;
        }

        else
        {
            mover->next = t2;
        }

        // new head = dummy->next;

        ListNode* deleteme = dummy;
        dummy = dummy->next;
        delete deleteme; // freeing memory
        return dummy;
        
    }
};