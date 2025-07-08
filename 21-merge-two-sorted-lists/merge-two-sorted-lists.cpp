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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

        ListNode* dummi = new ListNode(-1); // creating dummy pointer
        ListNode* temp = dummi; // to traverse dummy

        ListNode *traverser1 = list1;
        ListNode *traverser2 = list2;


        while(traverser1!=nullptr && traverser2!=nullptr)
        {
            if(traverser1->val < traverser2->val) // if value in list one is small dummy points to list 1 element                                  
            {
                temp->next = traverser1;
                temp = temp->next;
                traverser1 = traverser1->next;
            }

            else // dummy points to list 2 element
            {
                temp->next = traverser2;
                temp = temp->next;
                traverser2 = traverser2->next;
            }
        }

        if(traverser1) // if traverser2 reaches null but traverser1 is still left
        {
            temp->next = traverser1;
        }

        else // vice versa
        {
            temp->next = traverser2;
        }

        ListNode *deletehead = dummi;
        dummi = dummi->next;

        delete deletehead; // freeing the dummy pointer created.

        return dummi;
        
    }
};