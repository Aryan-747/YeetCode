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
    bool isPalindrome(ListNode* head) {

        // using stack (O(2n) Time, O(n) Space)

        stack<int> st1;

        ListNode* temp = head;

        while(temp!=nullptr)
        {
            st1.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while(temp!=nullptr && st1.empty() == false)
        {
            if(st1.top() != temp->val)
            {
                return false;
            }
            st1.pop();
            temp = temp->next;
        }

        return true;
        
    }
};