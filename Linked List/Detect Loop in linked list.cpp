//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1

 //Function to check if the linked list has a loop.
    bool detectLoop(Node* head)
    {
        // Using FLOYD'S CYCLE Detection Algo
      //Initialize slow and fast pointer to head 
      //Move slow pointer by 1 node at a time and move fast pointer 2 nodes at a time.
      //If these pointers meet , then there is a loop.
        Node *slow=head,*fast=head;
        while(fast!=NULL && fast->next!=NULL ){
            slow=slow->next;
            fast=fast->next->next;
            if(slow==fast)
                return true;
        }
       
        return false;
        
    }
