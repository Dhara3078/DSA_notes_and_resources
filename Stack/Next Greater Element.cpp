//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/next-larger-element-1587115620/1

//Function to find the next greater element for each element of the array.
     vector<long long> nextLargerElement(vector<long long> arr, int n)
    {
        //idea is to create one stack and push last element of arr to the stack
        //traverse arr right to left and compute next greater element 
        stack<long long> s;
        vector<long long> res;
        res.push_back(-1);//always last element of arr doesn't have next greater element  
        s.push(arr[n-1]);//pushing last element of arr
        for(int i=n-2; i>=0; i--)//running loop from n-2 position 
        {
            while(s.empty() == false && s.top()<=arr[i]) //we will run this loop until stack is empty or we find greater element then arr[i] in top of stack
                s.pop();
            if(s.empty()) //if stack is empty push -1 to res vector
                res.push_back(-1);
            else 
                res.push_back(s.top()); //else push top of stack
                
            s.push(arr[i]); //push arr[i] to the stack
        }
        reverse(res.begin(), res.end()); //because we are calulating next greater element right to left we need to reverse res vector 
        return res;
    }
