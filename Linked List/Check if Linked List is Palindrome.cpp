//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1



Node * reverse(Node *head){
        if(head == NULL || head->next == NULL)
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
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        Node *res_head= reverse(slow->next);
       
            Node *curr1=head,*curr2=res_head;
            while(curr2!=NULL){
                if(curr1->data!=curr2->data){
                    return 0;
                }
                curr1=curr1->next;
                curr2=curr2->next;
            }
        
        return 1;
    }
