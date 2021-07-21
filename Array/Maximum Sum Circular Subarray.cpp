//link for question⬇⬇
//https://leetcode.com/problems/maximum-sum-circular-subarray/

 int kadaneAlgo(vector<int>& nums){
        int maxSum=INT_MIN;
        int sum=0,i=0;
        while(i<nums.size()){
            sum+=nums[i];
            if(sum>maxSum){
                maxSum=sum;
            }
            if(sum<0){
                sum=0;
            }
            
            i++;
        }
        
        return maxSum;
    }
    
    int maxSubarraySumCircular(vector<int>& nums) {
        //idea is to use kadane algo for find non-circular subaaray maxsum and for circular subaaray maxsum 
        // make sum of all element and  change sing of all array element after 
        //that use kadane algo for it which gives minsum . Now do circularSum= tatalSum-minsum which gives maxSum of circular subarray
        //for final maximum sum return max sum from non-circular subaaray maxsum and circulararray maxsum
        if(nums.size()==0)
            return 0;
        
        int nonCirSum= kadaneAlgo(nums);
        int totalSum=0;
        for(int i=0;i<nums.size();i++){
            totalSum+=nums[i];
            nums[i]=(-nums[i]);
        }
        int minSum=kadaneAlgo(nums);
        int cirSum=totalSum+minSum;
        if(cirSum==0){  // corner case if all element of array are negative 
             return nonCirSum;
        }
        
        else
             return max(cirSum,nonCirSum);
        
       
        
    }
