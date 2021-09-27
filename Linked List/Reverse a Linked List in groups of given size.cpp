//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/reverse-a-linked-list-in-groups-of-given-size/1

struct node *reverse (struct node *head, int k)
    { 
        // Complete this method
        node *curr=head;
        node *prevFrist=curr;// for storing frist element of linked list before reverse
        bool isFristPass=true;// for checking 1st pass cause we need to update head after 1st reversal loop
        
        while(curr!=NULL){
            node *frist=curr;// storing 1st node in window of k nodes 
            node *prev=NULL; // for previous node
            int count=0;
            while(curr!=NULL && count<k){
                node *next=curr->next;
                curr->next=prev;
                prev=curr;
                curr=next;
                count++;
            }
            if(isFristPass){
                head=prev; //updating head after 1st reversing k nodes
                isFristPass=false; 
            }
            else{
                
                prevFrist->next=prev; // linking windows of k nodes after reverse
                prevFrist=frist; //update previous frist to frist node of previous window
            }
        }
        
        return head;
    }
