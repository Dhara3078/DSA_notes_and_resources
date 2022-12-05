//Link for the question⬇⬇
//https://leetcode.com/problems/middle-of-the-linked-list/

//Level = Easy

//code

ListNode* middleNode(ListNode* head) {
        ListNode* first=head;
        ListNode* second=head;
        while(second!=NULL && second->next!=NULL){
            first=first->next;
            second=second->next->next;
        }
        
        return first;
    }
