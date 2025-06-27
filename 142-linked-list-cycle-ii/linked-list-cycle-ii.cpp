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
    ListNode *detectCycle(ListNode *head) {

        ListNode* slow = head;
        ListNode* fast = head;


        while(fast!=nullptr && fast->next != nullptr)
        {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast)
            {
                break;
            }
        }

        // reset slow to head;
        slow = head;

        while(fast!=nullptr && fast->next != nullptr)
        {
            if(slow == fast)
            {
                return slow;
            }
            // in some cases slow and fast might detect loop at starting point itself, so first check then move to next node
            slow = slow->next;
            fast = fast->next;
        }

        return nullptr;
    }
};