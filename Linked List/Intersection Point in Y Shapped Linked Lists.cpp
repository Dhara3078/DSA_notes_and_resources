//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/intersection-point-in-y-shapped-linked-lists/1

//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    // idea:
    //Get count of the nodes in the first list, let be c1.
    //Get count of the nodes in the second list, let be c2.
    //Get the difference of counts d = abs(c1 – c2).
    //Now traverse the bigger list from the first node till d nodes so that from here onwards both the lists have equal no of nodes.
    //Then we can traverse both the lists simultaneously till we come across a common node.
    int cnt1=1,cnt2=1,res=-1;
    Node *curr1=head1,*curr2=head2;
    while(curr1!=NULL){
        cnt1++;
        curr1=curr1->next;
    }
    while(curr2!=NULL){
        cnt2++;
        curr2=curr2->next;
    }
    int d=(cnt1>cnt2)?cnt1-cnt2:cnt2-cnt1;
    curr1=head1;
    curr2=head2;
    if(cnt1>cnt2){
        for(int i=0;i<d;i++){
            curr1=curr1->next;
        }
    }
    else{
        for(int i=0;i<d;i++){
            curr2=curr2->next;
        }
    }
    while(curr1!=NULL && curr2!=NULL){
        if(curr1->next==curr2->next){
            res=curr1->next->data;
            break;
        }
        curr1=curr1->next;
        curr2=curr2->next;
    }
    
    return res;
}
