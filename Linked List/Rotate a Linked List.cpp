//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1/?track=P100-Linked%20List&batchId=197

//Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        //step 1: first get hold of (k+1)th node of linked list
        //step 2: make new head as (k+1)th node
        //step 3: get hold of last node of linked list and make next points of it previous head
        //step 4: now traverse linked list from previous head to k node od linked list
        //step 5: make k node next points to NULL
        
        if(k==0)//corner case when k=0 we don't need to change linked list
            return head;
        
        Node *curr=head;//step 1
        for(int i=0;i<k && curr!=NULL ;i++){
            curr=curr->next;
        }
        
        if(curr==NULL)//another corner case when k>= length of linked list 
            return head;
            
        Node *newHead=curr;//step 2
        
        while(curr->next!=NULL){//step 3
            curr=curr->next;
        }
        curr->next=head;
        
        Node *temp=head;//step 4
        for(int i=0;i<k-1;i++){
           temp =temp->next;
        }
        
        temp->next=NULL;//step 5
        
        
        return newHead;
    }
