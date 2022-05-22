int compare(Node *list1, Node *list2) 
{
     // Code Here
     Node *temp=list1;string str1="",str2="";
     while(temp!=NULL)
     {
         str1=str1+temp->c;
         temp=temp->next;
     }
     temp=list2;
     while(temp!=NULL)
     {
         str2=str2+temp->c;
         temp=temp->next;
     }
     if(str1==str2)
     return 0;
     if(str1>str2)
     return 1;
     else
     return -1;
}
