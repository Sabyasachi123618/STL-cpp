    struct Node* reverse(struct Node *head)
    {
        Node *cur=head;
        Node *prev=NULL,*next=NULL;
        while(cur!=NULL)
        {
            next=cur->next;
            cur->next=prev;
            prev=cur;
            cur=next;
        }
        head=prev;
        return head;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        head=reverse(head);
        Node *temp=head;
        Node *prev;
        if(head->data<9)
        head->data=head->data+1;
        else
        {
            while(temp!=NULL)
            {
                if(temp->data==9 and temp->next!=NULL)
                {
                    temp->data=0;
                    temp=temp->next;
                }
                else if(temp->data!=9)
                {
                    temp->data=temp->data+1;
                    break;
                }
                else
                {
                    temp->data=0;
                    Node *n=new Node(1);
                    temp->next=n;
                    break;
                }
            }
        }
        return reverse(head);
    }
