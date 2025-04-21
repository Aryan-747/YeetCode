class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = nullptr; // Previo
        ListNode* next = nullptr; // Next node
        ListNode* curr = head;    // Current node starts at the head

    
        while (curr != nullptr) {
    
            next = curr->next;

            // Reverse the link
            curr->next = prev;

            // Move pointers forward
            prev = curr; 
            curr = next; 
        }
        return prev;
    }
};