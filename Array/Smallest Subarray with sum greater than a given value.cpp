//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/smallest-subarray-with-sum-greater-than-x5651/1


int sb(int arr[], int n, int x)
    {
        // Your code goes here 
        //using two pointer approach
        int res=n-1 ;// because in que it says that answer always exists and x doesn't
                    // excced the summation of whole array
        int i=0,j=0;
        long sum=0;
        
        while(i<n){
            
            if(arr[i]>x){// checking if arr element is > than x  its becomes smallest subarray
                return 1;   //and we just resturn 1 
            }
            
            sum+=arr[i];
            
            if(sum>x){
                res=min(res,i-j+1);
                while(sum>x){
                    sum-=arr[j];
                    j++;
                    if(sum>x){
                       res=min(res,i-j+1); 
                     }
                }
                
            }
            
            i++;
        }
        
        return res;
    }
