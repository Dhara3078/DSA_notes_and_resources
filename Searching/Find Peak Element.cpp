//link for the question⬇⬇
//https://leetcode.com/problems/find-peak-element/

int findPeakElement(vector<int>& nums) {
  //binary search
        int start=0;
        int end=nums.size()-1;

        while(start<end){
            int mid=start+(end-start)/2;
            
            if(nums[mid]>nums[mid+1])
                //that mean we are in decending order part of arry
                //this might be answer so we move end pointer to mid not mid-1 and check in left half
                end=mid;
            else//else we are in ascending order part of array and for checking in right half
                //move start pointer to mid+1 because we know that arr[mid+1]>arr[mid] 
                start=mid+1;
        }
        
        return end;//we can return any one of start or end because both will be pointing to peak element
    }
