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
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        
        ListNode* temp = head;

        if(temp->next == nullptr)
        {
            return head;
        }
        
        // works when more than 2 nodes
        while(temp->next != nullptr)
        {
            int n1 = temp->val;
            int n2 = temp->next->val;
            int maxi = INT_MIN;
            int maxno = max(n1,n2);
            int minno = min(n1,n2);

            bool ispres = false;

            for(int i=1 ; i<=maxno ; i++)
            {
                if(n1%i ==0 && n2%i == 0)
                {
                    ispres = true;
                    maxi = max(maxi,i);
                }
            }

            if(ispres)
            {
            ListNode* nn = new ListNode(maxi);

            nn->next = temp->next;
            temp->next = nn;
            }

            temp = temp->next->next;
        }

        return head;

        
    }
};