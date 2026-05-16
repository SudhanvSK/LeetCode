class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // Submitted for 100DaysLeetCodeChallenge DAY 66
        ListNode* a = headA;
        ListNode* b = headB;
        while(a!=b) {
            if(a!=NULL) a = a->next; else a = headB;
            if(b!=NULL) b = b->next; else b = headA;
        }
        return a;
    }
};