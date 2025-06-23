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
    ListNode* oddEvenList(ListNode* head) {

        // brute force data replacement

        if(head == nullptr || head->next == nullptr)
        {
            return head;
        }

        vector<int> data(10000,0);

        ListNode* temp = head;
        ListNode* temp2 = head->next;
        int i = 0;

        while(temp!=nullptr && temp->next!=nullptr)
        {
            data[i] = temp->val;
            temp = temp->next->next;
            i++;
        }

        // in case last node is leftout
        if(temp)
        {
            data[i] = temp->val;
            i++;
        }

        while(temp2!=nullptr && temp2->next != nullptr)
        {
            data[i] = temp2->val;
            temp2 = temp2->next->next;
            i++;
        }

        //in case last node is leftout
        if(temp2)
        {
            data[i] = temp2->val;
            i++;
        }

        ListNode *temp3 = head;
        i = 0;
        while(temp3!=nullptr)
        {
            temp3->val = data[i];
            i++;
            temp3 = temp3->next;
        }
        
        return head;
        
    }
};