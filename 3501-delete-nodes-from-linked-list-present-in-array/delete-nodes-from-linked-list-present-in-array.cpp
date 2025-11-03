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
    ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        // using a hashset for better time complexity

        unordered_set<int> s1(nums.begin(),nums.end());

        ListNode* prev = nullptr;
        ListNode* temp = head;

        while(temp)
        {
            if(s1.find(head->val)!=s1.end()) // head contains value
            {
                head = head->next;
                temp = head;
                continue;
            }

            else if(s1.find(temp->val)!=s1.end())
            {
                prev->next = temp->next;
                temp->next = nullptr;
                temp = prev->next;
                continue;
            }

            prev = temp;
            temp = temp->next;
        
        }
        return head;
    }
};