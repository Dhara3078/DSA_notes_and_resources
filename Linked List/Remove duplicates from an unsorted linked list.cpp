//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1

//Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // idea is to store curr node data in set and if curr next data is already present in set 
     // we delete that node and link curr next to next of duplicate node
        unordered_set<int> set; // hash set for storing curr node data
        Node *curr=head;
        while(curr!=NULL && curr->next!=NULL){
            set.insert(curr->data); //insert curr node data in set
            if(set.find(curr->next->data)!=set.end()){ 
                Node *temp=curr->next;
                curr->next=curr->next->next;
                delete temp;
            }
            else{
                curr=curr->next;
            }
        }
        
        return head;
    }
