//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/subarray-with-0-sum-1587115621/1



 //Function to check whether there is a subarray present with 0-sum or not.
    bool subArrayExists(int arr[], int n)
    {
        //Your code here
        unordered_set<int>s;
        int pre_sum=0;
        for(int i=0;i<n;i++){
            
            pre_sum+=arr[i]; 
            
            
            if(s.find(pre_sum)!=s.end())// checks if sum is already present in set
            return true;     // if yes than restun true because if same element as sum is present in set means in between sum of subarray becomes 0
            
            if(pre_sum==0) // while adding array element if sum becomes 0 means sum of that subarray is 0
            return true;   
            
            s.insert(pre_sum); // adding prefix sum in unordered set
            
        }
        
        return false;
    }
