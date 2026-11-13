class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if (head == NULL || head->next == NULL) return head;
        ListNode* newhead = head->next;
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            ListNode* temp1 = temp->next;
            ListNode* temp2 = temp1->next;
            temp1->next = temp;
            if(temp2 != NULL && temp2->next != NULL) temp->next = temp2->next;
            else temp->next = temp2; 
            if (temp2 == NULL || temp2->next == NULL) break;
            temp = temp2;
        }
        return newhead;
    }
};