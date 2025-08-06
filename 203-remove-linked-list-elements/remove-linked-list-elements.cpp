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
    ListNode* removeElements(ListNode* head, int val) {

        // using dummy node;

        ListNode* dummi = new ListNode(-1,head);
        ListNode* mover = dummi; // traversing dummi

        ListNode* prev = nullptr;

        while(mover!=nullptr)
        {
            if(mover->val == val)
            {
                prev->next = mover->next;
                mover = mover->next;
            }
            else
            {
            prev = mover;
            mover = mover->next;
            }
            
        }
        
        return dummi->next;
    }
};