//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/reverse-a-doubly-linked-list/1

Node* reverseDLL(Node * head)
{
    //Idea is to just swap prev and next pointer and handle corner cases
    if(head==NULL || head->next==NULL)
        return head;
    
    Node *prev=NULL,*curr=head;
    
    while(curr->next!=NULL){
        
        swap(curr->next,curr->prev);
        curr=curr->prev;
    }
    swap(curr->next,curr->prev);
    return curr;
}
