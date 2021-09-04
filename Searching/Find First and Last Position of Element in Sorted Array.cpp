//link for question⬇⬇
//https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/
 //binary search problem
        //we will perform binary search two times
        //1st time for finding 1st occurence of target
        //2nd time for finding last occurence of target
int firstOcc(int start,int end,int target,vector<int>& nums){
        int first=-1;
         while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                
                first = mid;
                end = mid - 1; 
            }
         }
        return first;
    }
    
    int lastOcc(int start,int end,int target,vector<int>& nums){
        int last=-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]<target){
                start=mid+1;
            }
            else if(nums[mid]>target){
                end=mid-1;
            }
            else{
                    last=mid;
                    start=mid+1;
            }
        }
        
        return last;
    }
    
    vector<int> searchRange(vector<int>& nums, int target) {
       
        vector<int>res(2,-1);
        
        res[0]=firstOcc(0,nums.size()-1,target,nums);
        if(res[0] == -1)
            return res;
        res[1]=lastOcc(0,nums.size()-1,target,nums);
        
        return res;
        
        
    }
        
