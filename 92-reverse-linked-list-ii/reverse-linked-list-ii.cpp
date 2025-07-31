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
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        // edge cases
        if(head == nullptr || head->next == nullptr || left == right)
        {
            return head;
        }

        // finding the start point
        int cnt = 1;
        ListNode* curr = head;
        ListNode* prev = nullptr;

        while(cnt!=left)
        {   
            prev = curr;
            curr = curr->next;
            cnt++;
        }

        // storing important nodes
        ListNode* pts = prev;
        ListNode* start = curr;

        // resetting prev;
        prev = nullptr;


        // reversing sublist
        while(curr!=nullptr && cnt<right+1)
        {
            ListNode* next = curr->next;
            curr->next = prev;

            prev = curr;
            curr = next;
            cnt++;
        }

        // connecting sublist correctly to the main list


        // sublist started from 1st node
        if(pts == nullptr)
        {
            start->next = curr;
            return prev; //  prev is new head
        }

        pts->next = prev;
        start->next = curr;

        return head;

        
    }
};