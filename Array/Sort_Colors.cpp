// link for question⬇
//https://leetcode.com/problems/sort-colors/

// Used Dutch National Flag Algorithm
void sortColors(vector<int>& nums) {
        int low=0,high=nums.size()-1,mid=0;
        
        while(mid<=high){
           if(nums[mid]==0){
               swap(nums[mid++],nums[low++]);
             }  
           else if(nums[mid]==1){
               mid++;
           }
           else {
               swap(nums[mid],nums[high--]);
           }
        }
    }
