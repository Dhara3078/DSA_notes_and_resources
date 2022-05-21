//Link for the question:
//https://leetcode.com/problems/find-all-duplicates-in-an-array/



// Idea behid this solution :
// Use cycle sort :
// Why?
// --> Because in question it's given that all element of array will be between 1 to N range, where N equal to number of elements in an array.
// --> We know that cycle sort is very optimal sorting algo for sorting elements who are in range between 1 to N in O(n) time.
// --> So the idea is to use cycle sort and put all the elemets in their right position but with just little modification to handle duplicate.
// --> If any element is duplicate then its original element should already placed in its right position by cycle sort. To handle this we will check another condition before swapping in cycle sort that if current element is duplicate or not.

// Step 1: Using cycle sort we will put all elemets in their right position.
// Step 2: Now check all elemets and if element is not in its right position that means that element is duplicate, add that element into res vector.

// Time Complexity : O(N)
// Space Complexity : O(1)

class Solution {
public:
    
    void cycleSort (vector<int> &nums){
        int i = 0;
        int n = nums.size();
        
        while(i<n){
            if(i!=nums[i]-1 && nums[i]!=nums[nums[i]-1]) //in cycle sort algo to handle duplicate add this condition (nums[i]!=nums[nums[i]-1]) to check whether duplicate of current element is already place in its right position
                swap(nums[i],nums[nums[i]-1]);
            else
                i++;
        }
    }
    
    vector<int> findDuplicates(vector<int>& nums) {
        vector<int> res;
        int n = nums.size();
        
        if(n<2){
            return res;
        }
        
        cycleSort(nums);
        
        for(int i = 0; i < n; i++){
            if(i!=nums[i]-1) //if current element is not placed in its right position that means that element is duplicate
                res.push_back(nums[i]);
        }
        
        return res;
        
    }
};
