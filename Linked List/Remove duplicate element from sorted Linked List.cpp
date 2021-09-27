//Link for the question⬇⬇
//

//Function to remove duplicates from sorted linked list.
Node *removeDuplicates(Node *head)
{
 
 Node *curr=head;
 while(curr!=NULL && curr->next!=NULL){
     if(curr->data==curr->next->data){ //if we find duplicate just delete that node and make curr next points to next of that node.
         Node *temp=curr->next;
         curr->next=curr->next->next;
         delete temp;
     }
     else
         curr=curr->next;
 }
 
 return head;
}
