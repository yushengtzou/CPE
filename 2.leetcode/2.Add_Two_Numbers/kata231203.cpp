class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Create a dummy head for the result list
        ListNode dummyHead;
        ListNode* curr = &dummyHead;

        int carry = 0;

        // Traverse through both lists
        while (l1 != nullptr || l2 != nullptr) {
            // Get the value of the current nodes
            int x = (l1 != nullptr) ? l1->val : 0;
            int y = (l2 != nullptr) ? l2->val : 0;

            // Calculate sum and update carry
            int sum = carry + x + y;
            carry = sum / 10;

            // Create a new node with the digit value
            curr->next = new ListNode(sum % 10);
            curr = curr->next;

            // Move to the next nodes in l1 and l2
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        // Check for leftover carry
        if (carry > 0) {
            curr->next = new ListNode(carry);
        }

        // The real head of the result list is next to the dummy head
        return dummyHead.next;
    }
}
