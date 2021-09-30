//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/valid-substring0624/1#

int findMaxLen(string s) {
        
        stack<int> st;
        st.push(-1); //push -1 as initial index to it.
        int len = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='(') //if s[i] is opening bracket, push index of it 
                st.push(i);
            
            else{ //else it will be closing bracket 
                
                if(!st.empty()) //poping previous opening bracket's index
                    st.pop();
                
                if(!st.empty()) //if stack is not empty check if cuurent vaild length is greater than previous len or not
                    len=max(len,i-st.top()); //find current length by subtracting current index with stack top
                    
                else //If stack is empty. push current index as base for next valid substring (if any) 
                    st.push(i);
            }
        }
        
        return len;
    }
