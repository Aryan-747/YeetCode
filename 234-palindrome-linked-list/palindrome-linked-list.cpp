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

        // using steck

        stack<int> s1;

        ListNode* temp = head;

        while(temp!=nullptr)
        {
            s1.push(temp->val);
            temp = temp->next;
        }

        temp = head;

        while(!s1.empty())
        {
            if(s1.top()!=temp->val)
            {
                return false;
            }

            temp = temp->next;
            s1.pop();
        }

        return true;
        
    }
};