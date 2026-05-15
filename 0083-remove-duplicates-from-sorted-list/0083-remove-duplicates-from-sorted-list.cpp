class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        // Submitted for 100DaysLeetCodeChallenge DAY 65
        ListNode* ans = head;
        while (ans!=NULL && ans->next!=NULL)
        {
            if(ans->next->val == ans->val) ans->next = ans->next->next;
            else ans = ans->next;
        }
        return head;
    }
};