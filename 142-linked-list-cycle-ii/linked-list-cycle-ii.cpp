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

        // using hashing

        ListNode* temp = head;
        map<ListNode*, int> m1;

        while(temp!=nullptr)
        {
            if(m1.find(temp)!=m1.end())
            {
                return temp;
            }

            m1[temp]++;
            temp = temp->next;
        }

        return nullptr;
        
    }
};