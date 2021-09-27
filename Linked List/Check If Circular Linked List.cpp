//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/circular-linked-list/1

/* Should return true if linked list is circular, else false */
bool isCircular(Node *head)
{
   // Your code here
   if(head->next==head)
    return true;
   Node *first=head,*curr=head;
   
   while(curr!=NULL){
       curr=curr->next;
       if(curr==first)
        return true;
   }
   
   return false;
}
