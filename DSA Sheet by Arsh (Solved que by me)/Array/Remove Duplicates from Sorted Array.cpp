//Link for the question
//https://leetcode.com/problems/remove-duplicates-from-sorted-array/

//Time Complexity : O(n)
//Space Complexity : O(1)

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n =nums.size();
        int k = 1;
        for(int i = 1;i<n;i++){
            if(nums[i]>nums[k-1]){
                nums[k]=nums[i];
                k++;
            }
        }
        
        return k;
    }
};
