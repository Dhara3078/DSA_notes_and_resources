//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/clone-a-linked-list-with-next-and-random-pointer/1

Node *copyList(Node *head)
    {
        //method 2:
        //step 1: make a copy node of every node in original linked list
        //step 2: for each copy node set random pointer 
        //step 3: make clone linked list from copy nodes and set original linked list
        Node *curr=head,*Next=NULL;
        while(curr!=NULL){//step 1
            Next=curr->next;
            curr->next= new Node(curr->data);
            curr->next->next=Next;
            curr=Next;
        }
        for(curr=head;curr!=NULL;curr=curr->next->next){//step 2
            curr->next->arb=(curr->arb!=NULL)?curr->arb->next:NULL;
        }
        Node *clonehead=head->next,*temp=NULL;
        curr=head;
        while( curr!=NULL && curr->next!=NULL){//step 3
            
            temp=curr->next;
            curr->next=temp->next;
            curr=temp;
            
        }
        
        return clonehead;
    }
