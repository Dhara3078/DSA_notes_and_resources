//link for the question⬇⬇
//

//Function to sort a linked list of 0s, 1s and 2s.
    Node* segregate(Node *head) {
        
        //idea is to count no of 0s, 1s and 2s in linked list 
        //after that just change node data according to it 
        //first for all 0s second for all 1s and after that for all 2s
        Node *curr=head;
        int cnt1=0,cnt0=0,cnt2=0; //cnt0 = count of 0s // cnt1 = count of 1s // cnt2 = count of 2s
        while(curr!=NULL){
            if(curr->data==0){
                cnt0++;
            }
            if(curr->data==1){
                cnt1++;
            }
            if(curr->data==2){
                cnt2++;
            }
            curr=curr->next;
        }
        curr=head;
        while(cnt0!=0){
            curr->data=0;
            cnt0--;
            curr=curr->next;
        }
        while(cnt1!=0){
            curr->data=1;
            cnt1--;
            curr=curr->next;
        }
        while(cnt2!=0){
            curr->data=2;
            cnt2--;
            curr=curr->next;
        }
        
        return head;
    }
