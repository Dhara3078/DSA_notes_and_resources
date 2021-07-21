//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/maximum-sum-of-subarray-less-than-or-equal-to-x4033/1/?category[]=sliding-window&category[]=sliding-window&difficulty[]=0&page=1&sortBy=submissions&query=category[]sliding-windowdifficulty[]0page1sortBysubmissionscategory[]sliding-window


int findMaxSubarraySum(long long arr[], int n, long long sum)
	{
	    // Using variable size Window sliding 
	    long long pre_sum=0,maxSum=0;  
	    int i=0,j=0; 
	    while(j<n){
	        pre_sum+=arr[j];   // computing sum
	        
	        if(pre_sum<=sum){ 
	            maxSum=max(pre_sum,maxSum);
	        }
	        
	        else{
	            while(pre_sum>sum){//if pre_sum becomes > than sum we need to subtract arr[i]
	            pre_sum-=arr[i]; // from pre_sum and increament i . we do this untill pre_sum
	            i++;             // becomes <= sum
	            }
	            
	            if(pre_sum<=sum){ //we need to again check  after subtracting arr[i] 
	            maxSum=max(pre_sum,maxSum);//pre_sum becomes <= sum or not. if yes than update
	            }                          //maxSum
	        }
	        
	        j++;
	    }
	    
	    return maxSum;
	}  
