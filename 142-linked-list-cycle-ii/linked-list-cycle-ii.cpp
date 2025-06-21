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

        // using tortoise and hare, most optimal solution

        ListNode* slow = head;
        ListNode* fast = head;

        while(fast != nullptr && fast->next != nullptr)
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

        // move each by one now

        while(fast!=nullptr && fast->next !=nullptr)
        {
            if(slow == fast)
            {
                // node where loop starts
                return slow;
            }

            slow = slow->next;
            fast = fast->next;


        }



        return nullptr;
        
    }
};