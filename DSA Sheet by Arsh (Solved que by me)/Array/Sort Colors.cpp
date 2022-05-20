//Link for the question
//https://leetcode.com/problems/sort-colors/


//Time Complexity : O(n)
//Space Complexity : O(1)

class Solution {
public:
    //Dutch National Flag ALgo
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
};
