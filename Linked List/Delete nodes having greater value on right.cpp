//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/delete-nodes-having-greater-value-on-right/1

//Reverse list
//Remove nodes which have bigger value on the left.
//To do this, simply iterate from left to right, and store the max value seen. Keep comparing all nodes to the stored max value.

In the end reverse the list again.
Node *reverse(Node *head){
        if(head==NULL || head->next==NULL)
        return head;
        Node *curr=head,*prev=NULL;
        while(curr!=NULL){
            Node *Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        
        return prev;
    }
    
    void deltLesserNode(Node *head){
        Node *curr=head;
        Node *max=head;
        while(curr!=NULL && curr->next!=NULL){
            if(curr->next->data<max->data){
                Node *temp=curr->next;
                curr->next=temp->next;
                delete temp;
            }
            else{
                curr=curr->next;
                max=curr;
            }
        }
    }
    Node *compute(Node *head)
    {
        // your code goes here
       Node *NewHead=reverse(head);
       deltLesserNode(NewHead);
       NewHead=reverse(NewHead);
       
       return NewHead;
        
    }
