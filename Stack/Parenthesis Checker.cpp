//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/parenthesis-checker2744/1

 //This function checks if opening parenthesis matching or not
    bool ismatching(char a, char b){
        return (a=='(' && b==')') || (a=='[' && b==']') || (a=='{' && b=='}');
    }
    //Function to check if brackets are balanced or not.
    bool ispar(string x)
    {
        stack<char>s;
        for(int i=0;i<x.size();i++){
            if(x[i]=='(' || x[i]=='[' || x[i]=='{'){//if we find opening parenthesis push it to stack
                s.push(x[i]);
            }
            else{
                if(s.empty())//if stack is empty return false because if parenthesis are correct then tere must be opening parenthesis present in stack
                    return false;
                else if(ismatching(s.top(),x[i])==false)//checking if closing parenthesis matching to the top of stack
                    return false;
                else //if ismatching function return true we need to pop top of the stack for checking other 
                    s.pop();
            }
        }
        return (s.empty()==true);//checking if there is no other extra parenthesis present
    }
