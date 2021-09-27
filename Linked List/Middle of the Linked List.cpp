//Link for the question⬇⬇
//https://leetcode.com/problems/middle-of-the-linked-list/

//idea is to use slow and fast pointer 
//slow pointer will move one node at a time and fast pointer will move 2 nodes at a time 
//when fast next becomes null(when linked list contain odd number of nodes) or fast next of next becomes null(when linked list contain even number of nodes) 
//break the loop and return slow pointer 
ListNode* middleNode(ListNode* head) {
        ListNode *slow=head,*fast=head;
        while(fast->next!=NULL && fast->next->next!=NULL){
            fast=fast->next->next;
            slow=slow->next;
        }
        if (fast->next!=NULL){
            return slow->next;
        }
        else
        return slow;
    }
