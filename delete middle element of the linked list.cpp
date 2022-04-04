class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode *temp=head;
        ListNode *prev=NULL;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
        if(count==1)
            return NULL;
        int x=0;temp=head;
        while(x!=(count/2))
        {
            prev=temp;
            temp=temp->next;
            x++;
        }
        prev->next=temp->next;
        return head;
    }
};
