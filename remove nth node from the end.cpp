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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *temp=head;ListNode *prev=NULL,*cur;
        int count=0;
        while(temp!=NULL)
        {
            count++;
            temp=temp->next;
        }
         if(count==1)
        {
            head=NULL;
            return head;
        }
        temp=head;
        if(n==count)
        {
            while(temp!=NULL)
            {
                cur=prev;
                prev=temp;
                temp=temp->next;
            }
            cur->next=NULL;
            return head;
        }
        int x=count-n,count1=0;
        temp=head;
        while(count1!=x)
        {
            count1++;
            prev=temp;
            temp=temp->next;
        }
        prev->next=temp->next;
            
        return head;
    }
};
