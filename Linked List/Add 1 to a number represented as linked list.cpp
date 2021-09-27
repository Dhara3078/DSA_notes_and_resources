//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/add-1-to-a-number-represented-as-linked-list/1

Node *reverse(Node *head){
        if(head==NULL || head->next==NULL)
            return head;
        Node *curr=head;
        Node *prev=NULL;
        while(curr!=NULL){
            Node *Next=curr->next;
            curr->next=prev;
            prev=curr;
            curr=Next;
        }
        
        return prev;
    }
    Node* addOne(Node *head) 
    {
        // Your Code here
        // return head of list after adding one
        Node *revHead=reverse(head);
        Node *curr=revHead;
        int carry=1;
        while(curr!=NULL){
            if((curr->data+carry)>9){
                carry=1;
                curr->data=0;
            }
            else{
                carry=0;
                curr->data=(curr->data+1);
                break;
            }
            curr=curr->next;
        }
        if(carry==1){// to handle test case when all nodes are 9
            Node *New=new Node(carry);
            New->next=revHead;
            return New;
        }
        
        return reverse(revHead);
    }
