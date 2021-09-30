//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/delete-middle-element-of-a-stack/1#


//Function to delete middle element of a stack.
    //idea is to use another auxiliary stack and push all element till middle element of main stack
    //after that pop middle element from top of auxiliary stack
    //now push all element of auxiliary stack element to main stack
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       stack<int> aux;
        int mid = sizeOfStack>>1;
        for(int i=0; i<mid; i++)
        {
            aux.push(s.top());
            s.pop();
        }
        s.pop();
        for(int i=0; i<mid; i++)
        {
            s.push(aux.top());
            aux.pop();
        }
            
    }
