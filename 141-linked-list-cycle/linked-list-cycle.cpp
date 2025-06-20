/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {

        // using tortoise and hare method (fast and slow pointers)

        ListNode* fast = head;
        ListNode* slow = head;

        while(fast!=nullptr && fast->next!= nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                return true;
            }
        }

        return false;


        
    }
};