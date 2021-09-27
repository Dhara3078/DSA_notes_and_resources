//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/segregate-even-and-odd-nodes-in-a-linked-list5035/1

//idea is to make two vector, one to store even data and other to store odd data
//traverse linked list and first change data of nodes to even data 
//after even data finishes change data of other nodes to odd data
    Node* divide(int N, Node *head){
        Node *curr = head;
        vector<int> Ve; //vector of even data
        vector<int> Vo; //vector of odd data
        
        int cnte=0; //count of even data
        
        while(curr != NULL)
        {
            if((curr->data) % 2 == 0) //if curr data is even push it to Ve vector and increment cnte
            {
                Ve.push_back(curr->data);
                cnte++;
            }
            else
            {
                Vo.push_back(curr->data); //else it will be odd data so push it to Vo vector
            }
            curr = curr->next;
        }
        curr = head;
        int i=0, j=0; //i for even , j for odd
        
        while(curr != NULL)
        {
            if(cnte>0) //if count of even is greter than zero
            {
                curr->data = Ve[i]; //change the data of curr node to Ve[i]
                cnte--; //decrement count of even data
                i++; //increment i for moving to next element of Ve
            }
            else
            {
                curr->data = Vo[j];//change the data of curr node to Vo[j]
                j++; //increment j for moving to next element of Vo
            }
            
            curr = curr->next;
        }
        return head;
    }
