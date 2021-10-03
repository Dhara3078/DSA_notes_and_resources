//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/queue-reversal/1

//Function to reverse the queue.
queue<int> rev(queue<int> q)
{
    //using stack to reverse queue
    stack<int> s;
    while(q.empty()==false){
        s.push(q.front());
        q.pop();
    }
    while(s.empty()==false){
        q.push(s.top());
        s.pop();
    }
    
    return q;
}
