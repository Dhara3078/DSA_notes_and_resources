//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/the-celebrity-problem/1#

 //idea is to first find which positions are not answer to find that use stack
    //step 1: push all row number into stack
    //step 2: while stack conatain more than 1 element pop two index i and j if M[i][j]==1 means i is not answer and push j into stack
    //        else j is not answer and push i into stack
    //step 3: when stack contain only 1 element that means that index might me celebrity, to make sure that index is celebrity chack it's all row contain 0 or not
    //step 4: return that index if that index does contain any 1 in it return -1 means there is not any celebrity
      
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        stack<int> index;
        for(int i=0;i<M[0].size();i++){ //step 1
            index.push(i);
        }
        while(index.size()>1){ //step 2
            int i=index.top();
            index.pop();
            int j=index.top();
            index.pop();
            if(M[i][j]==1) //if i knows j that means i is not celebrity
                index.push(j);
            else           //else j knows i that means j is not celebrity
                index.push(i);
        }
        int cel=index.top();
        int flag=true;
        for(int i=0;i<M[0].size();i++){ //steo 3
            if(i!=cel){
                if(M[i][cel]==0 || M[cel][i]==1)
                    flag=false;
            }
        }
        //step 4
        if(flag==false) //if flag becomes false means cel is not real celebrity that why return -1
            return -1;
        
        return cel; 
    }
