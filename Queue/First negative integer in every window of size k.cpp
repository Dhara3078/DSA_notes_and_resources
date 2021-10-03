//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1#

vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
                                            
    vector<long long> res;
    queue<long long> q;
    for(int i=0;i<K;i++){ //computing 1st window answer
        if(A[i]<0)          //if element is negative, push it into queue
            q.push(A[i]);
    }
    //if queue is empty means that window doesn't contain negative element in it
    //else push front of queue into vector
    if (q.size()!=0) 
        res.push_back(q.front());
    else
        res.push_back(0);
    
    int i=0,j=K; //now do same thing for other window  for that use 2 pointer one at zero and one at index k
    while(j<N){
        
        if(A[i]==q.front()) //removing previous window negative
            q.pop();
            
        i++; 
        
        if(A[j]<0)  //if element is negative push it into queue
            q.push(A[j]);
        //if queue is empty means that window doesn't contain negative element in it
        //else push front of queue into vector
        if (q.size()!=0)
            res.push_back(q.front());
        else
            res.push_back(0);
            
        j++;
        
    }
    
    return res;
    
}
