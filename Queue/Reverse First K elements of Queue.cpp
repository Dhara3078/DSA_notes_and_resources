//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1#

// Function to reverse first k elements of a queue.
queue<int> modifyQueue(queue<int> q, int k) {
    // add code here.
    //idea is to use one stack to reverse queue and one auxiliray queue to store other element of queue
    queue<int> q2; //auxilary queue
    stack<int> s; //stack to reverse k element of main queue
    
    for(int i=0;i<k;i++){ //push k element of main queue into stack 
        s.push(q.front());
        q.pop();
    }
    while(q.empty()==false){ //push other element of queue into auxiliary queue
        q2.push(q.front());
        q.pop();
    }
    while(s.empty()==false){ //add all k element of stack into main queue
        q.push(s.top());
        s.pop();
    }
    while(q2.empty()==false){ //add all element of auxilary queue element into main queue
        q.push(q2.front());
        q2.pop();
    }
    
    return q;
}
