//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/remove-loop-in-linked-list/1


//Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        // just remove the loop without losing any nodes
        //first check if there is any loop in linked list 
      // Using FLOYD'S CYCLE Detection Algo
      //Initialize slow and fast pointer to head 
      //Move slow pointer by 1 node at a time and move fast pointer 2 nodes at a time.
      //If these pointers meet , then there is a loop.
        Node *slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL){
            
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                break;
        }
        if(slow!=fast)
            return;
        if(slow == head) // this is to handle the case when slow and fast meet at head 
        {
            while(slow->next != head)
            {
                slow = slow->next;
            }
            slow->next = NULL;
            return;
        }
        slow=head;
        while(slow->next!=fast->next){
            slow=slow->next;
            fast=fast->next;
        }
        fast->next=NULL;
    }

