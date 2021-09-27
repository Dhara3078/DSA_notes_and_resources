//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/split-a-circular-linked-list-into-two-halves/1


//  function which splits the circular linked list.  head is pointer
// to head Node of given lined list.  head1_ref1 and *head_ref2
// are pointers to head pointers of resultant two halves.

void splitList(Node *head, Node **head1_ref, Node **head2_ref)
{
    // your code goes here
    Node *fast=head,*slow=head;
    while(fast->next!=head && fast->next->next!=head){
        fast=fast->next->next;
        slow=slow->next;
    }
    //if total nodes are even move fast pointer by one node
    if(fast->next!=head){ 
        fast=fast->next;
    }
    *head1_ref=head;//making head pointer of 1st linkedlist to head of main linked list
    if(head->next!=head){
        *head2_ref=slow->next;//making head pointer of 2nd linked list to slow next node
    }
    fast->next=slow->next;//making 2nd linked list circular
    slow->next=head;//making 1st linked list circular
    
}
