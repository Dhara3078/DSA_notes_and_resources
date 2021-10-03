//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/count-the-reversals0401/1#

int countRev (string s)
{
    // your code here
    //idea is to use deque data structure
    //Step 1: traverse string from left to right
    //Step 2: if chat at index i is { opening bracket then push into deque and increment the count of opening bracket
    //step 3: else if char is } closing bracket and previous char is opening bracket then pop back of deque and decrement count of opening bracket (because we need to count only those bracket which are not vaild)
    //        else push it to deque and incerement the count of closing bracket
    //Step 4: if count of opening bracket is odd then do O = (O/2)+1 else O=O/2
    //Step 5: if count of closing bracket is odd then do C = (C/2)+1 else C=C/2
    //Step 6: return O+C;
    
    if(s.size()%2!=0) //corner case when there are odd number of brackets we can not balanced it 
        return -1;
        
    deque<char> dq;
    int O=0,C=0; //O = Count of opening bracket { , C = count of closing bracket }
    for(int i=0;i<s.size();i++){ //step 1
        if(s[i]=='{'){ //step 2
            dq.push_back(s[i]);
            O++;
        }
        else{ //step 3
            if(dq.size()==0 || dq.back()=='}'){
                C++;
                dq.push_back(s[i]);
            }
            else{
                dq.pop_back();
                O--;
            }
        }
    }
    
    if(O%2==0) //step 4
        O=O/2;
    else
        O=O/2+1;
        
    if(C%2==0) //step 5
        C=C/2;
    else
        C=C/2+1;
    
    return O+C; //step 6
    
}
