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

        vector<int> ans;
        vector<int> fs;

        ListNode *temp = head;

        while(temp!=nullptr)
        {
            fs.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;

        for(int i=0 ; i<fs.size() ; i++)
        {
            int dat = fs[i];
            int s = ans.size();

            ListNode* stemp = temp;
            while(stemp!=nullptr)
            {
                if(stemp->val > dat)
                {
                    ans.push_back(stemp->val);
                    break;
                }

                stemp = stemp->next;
            }

            if(ans.size() == s)
            {
                ans.push_back(0);
            }

            temp = temp->next;
        }

        return ans;
        
    }
};