//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1

//return the address of the string
//using stack data structure to reverse string
//step 1: push all char from string to stack
//step 2: push top char of stack to string and pop until stack is empty
char* reverse(char *S, int len)
{
    stack<char>s;
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    for(int i=0;i<len;i++){
        S[i]=s.top();
        s.pop();
    }
    
    return S;
}
