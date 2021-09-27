//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/intersection-of-two-sorted-linked-lists/1

Node* findIntersection(Node* head1, Node* head2)
{
   //same as intersection of two arrays
    Node *curr1=head1,*curr2=head2;
    Node *newHead=NULL;
    Node *temp=newHead;
    bool isFirst=true;
    
    
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->data==curr2->data){
            if(isFirst){
                newHead=curr1;
                temp=newHead;
                isFirst=false;
            }
            else{
                temp->next=curr1;
                temp=temp->next;
            }
            
            curr1=curr1->next;
            curr2=curr2->next;
            
        }
        
        else if(curr1->data < curr2->data)
        {
            curr1 = curr1->next;
        }
        else if(curr1->data > curr2->data)
        {
            curr2 = curr2->next;
        }
    }
    
    return newHead;
}
