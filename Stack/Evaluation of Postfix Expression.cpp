//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression1735/1

//Function to evaluate a postfix expression.
    int evaluatePostfix(string S)
    {
        //step 1: create an empty stack
        //step 2: traverse through every character of given postfix string
        //        if S[i] is an operand push to stack
        //        else (S[i] is operator)
        //        A=st.pop(),B=st.pop() after that compute BS[i]A 
        //        push the result to stack
        //step 3: return top of the stack
         
        stack<int> st;//step 1
        
        for(int i=0;i<S.size();i++){//step 2
            if(S[i]<=57 && S[i]>=48){
                st.push(S[i]-48);
            }
            else{
                int A= st.top();
                st.pop();
                int B= st.top();
                st.pop();
                int res;
                if(S[i]=='+')
                    res=B+A;
                else if(S[i]=='-')
                    res=B-A;
                else if(S[i]=='/')
                    res=B/A;
                else if(S[i]=='*')
                    res=B*A;
                st.push(res);
            }
        }
        
        return st.top();//step 3
    }
