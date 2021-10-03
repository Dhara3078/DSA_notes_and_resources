//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/queue-using-two-stacks/1

//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x)
{
    while(s1.empty()==false){
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(s2.empty()==false){
        s1.push(s2.top());
        s2.pop();
    }
}

//Function to pop an element from queue by using 2 stacks.
int StackQueue :: pop()
{
        // Your Code
        if(s1.empty()){
            return -1;
        }
        int temp=s1.top();
        s1.pop();
        return temp;
}
