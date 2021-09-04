//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/allocate-minimum-number-of-pages0937/1#

//similar problem to split array problem  here is link for this⬇⬇
//https://github.com/Dhara3078/100_Days_of_DSA/blob/main/Searching/Split%20Array%20Largest%20Sum.cpp
//Function to find minimum number of pages.
    int findPages(int arr[], int n, int m) 
    {
        int low=arr[0];
        int high=0;
        for(int i=0;i<n;i++){
            high+=arr[i];
        }
        
        while(low<high){
            int mid=(low+high)/2;
            
            if(isPossible(arr,n,mid,m)){
                high=mid;
              }
            else
            low=mid+1;
            
        }
        
        return low;
    }
    
    bool isPossible(int arr[],int n,int mid,int m){
        int student=1,sum=0;
        for(int i=0;i<n;i++){
            if(arr[i]>mid)
            return false;
            
            if(arr[i]+sum>mid){
                student++;
                sum=arr[i];
                
                if(student>m)
                 return false;
            }
            else {
                sum=sum+arr[i];
            }
        }
        return true;
    }
