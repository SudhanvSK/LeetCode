class Solution {
public:
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        int c = 0, s = 0;
        while(temp!=NULL)
        {
            ListNode* start;
            s+=temp->val;
            if(temp->val==0 && c==0) 
            {
                head = temp;
                temp->val = s;
                c++;
                start = temp;
                s = 0;
            }
            else if(temp->val == 0)
            {
                temp->val = s;
                start->next = temp;
                start = temp;
                s = 0;
            }
            temp = temp->next;
        }
        return head;
    }
};