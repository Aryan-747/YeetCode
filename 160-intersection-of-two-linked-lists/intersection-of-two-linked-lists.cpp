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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {

        unordered_map<ListNode*,int> m1; // better complexity than regular map;

        // traversing first list and storing all nodes

        ListNode* t1 = headA;

        while(t1!=nullptr)
        {
            m1[t1]++;
            t1 = t1->next;
        }

        // traversing second list and checking whether there is any common node

        ListNode* t2 = headB;

        while(t2!=nullptr)
        {
            if(m1.find(t2)!=m1.end()) // it is present
            {
                return t2;
            }
            
            t2 = t2->next;
        }
        

        return nullptr;
    }
};