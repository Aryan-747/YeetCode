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

        // using dummy node

        ListNode* dummy = new ListNode(-1,head);
        ListNode* temp = dummy;

        while(temp->next!=nullptr && temp!=nullptr)
        {
            if(temp->next->val == val)
            {
                ListNode* deleteme = temp->next;
                temp->next = temp->next->next;
                delete deleteme;
            }
            else
            {
            temp = temp->next;
            }
        }

        return dummy->next;
        
    }
};