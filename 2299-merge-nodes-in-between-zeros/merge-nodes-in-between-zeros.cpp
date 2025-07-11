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
    ListNode* mergeNodes(ListNode* head) {

        ListNode* temp = head;
        ListNode* dummy = new ListNode(-1);
        ListNode* mover = dummy;

        while(temp!=nullptr)
        {
            int sum = 0;
            if(temp->val == 0 && temp->next != nullptr)
            {
                temp = temp->next;
                while(temp!=nullptr)
                {
                    if(temp->val != 0)
                    {
                    sum+= temp->val;
                    }

                    else
                    {
                        break;
                    }
                    temp = temp->next;
                }

                mover->next = new ListNode(sum);
                mover = mover->next;
            }

            else
            {
                temp = temp->next;
            }

            
        }

        return dummy->next; // head
    }
};