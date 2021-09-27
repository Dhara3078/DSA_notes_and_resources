//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
       // Your code here
    
    Node *curr=head;
    int cnt=0;
    while(curr!=NULL){
        cnt++;
        curr=curr->next;
    }
    if(n>cnt)
    return -1;
    curr=head;
    for(int i=0;i<cnt-n;i++){
        curr=curr->next;
    }
    
    return curr->data;
}
