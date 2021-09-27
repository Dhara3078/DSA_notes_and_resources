//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/find-length-of-loop/1


//Function to find the length of a loop in the linked list.
int countNodesinLoop(struct Node *head)
{
    //first check if linked list contain any loop or not
    Node *fast=head,*slow=head;
    while(fast!=NULL && fast->next!=NULL){
        fast=fast->next->next;
        slow=slow->next;
        if(fast==slow){
            break;
        }
    }
    if(fast!=slow)//if loop is not present return 0
        return 0;
    int len=1; //len = length of loop
    slow=slow->next;
    while(slow!=fast){//run loop until slow and fast becomes ==
        len++;
        slow=slow->next;
    }
    
    return len;
}
