//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/trapping-rain-water-1587115621/1

int trappingWater(int arr[], int n){
        // Code here
        int leftMax[n],rightMax[n],res=0;
        
        leftMax[0]=arr[0];
        rightMax[n-1]=arr[n-1];
        
        for(int i=1;i<n;i++)
        leftMax[i]=max(arr[i],leftMax[i-1
        
        for(int i=n-2;i>=0;i--)
        rightMax[i]=max(arr[i],rightMax[i+1]);
        
        for(int i=1;i<n-1;i++)
        res=res+min(leftMax[i],rightMax[i])-arr[i]; 
        
        return res;
    }
