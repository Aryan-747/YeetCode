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
    vector<int> nextLargerNodes(ListNode* head) {

        vector<int> result;
        
        ListNode *len = head;
        int length = 0;

        while(len!=nullptr)
        {
            length++;
            len = len->next;
        }

        ListNode* maintemp = head;

        while(maintemp!=nullptr)
        {

        ListNode* temp = maintemp;
        ListNode* iterator = maintemp;
        bool check = false;
        while(iterator->next!=nullptr)
        {
            if(iterator->next->val > temp->val)
            {
                result.push_back(iterator->next->val);
                check = true;
                break;
            }
            iterator = iterator->next;
        }

        if(!check)
        {
            result.push_back(0);
        }
        maintemp = maintemp->next;
        }

        return result;
        
    }
};