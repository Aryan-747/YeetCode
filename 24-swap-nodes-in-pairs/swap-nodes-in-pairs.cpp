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
    ListNode* swapPairs(ListNode* head) {

        // brute force (swapping data instead of nodes)

        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        ListNode* odd = head;
        ListNode* even = head->next;

        while(even!=nullptr && even->next !=nullptr)
        {
            int temp = odd->val;
            odd->val = even->val;
            even->val = temp;

            odd = odd->next->next;
            even = even->next->next;
        }
        
        if(even)
        {
            int temp = odd->val;
            odd->val = even->val;
            even->val = temp;
        }
        

        

        return head;
        
    }
};