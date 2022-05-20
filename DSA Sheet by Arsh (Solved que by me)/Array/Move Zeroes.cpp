//Link for the question
//https://leetcode.com/problems/move-zeroes/

// Brute force:
// Time Complexity : O(n^2)
// Space Complexity : O(1)

class Solution {
public:
    //idea is first find zero element and after that find first non zero element and swap both zero and non zero elemets
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        
        
        for(int i = 0;i<n;i++){
            if(nums[i]==0 && i!=n-1){
               int nonZero = i+1;
                while(nums[nonZero]==0 && nonZero<n-1){
                    nonZero++;
                }
                
                swap(nums[i],nums[nonZero]);
            }
        }
        
    }
};

// Optimal Solution :
// If you observe then you will get idea that we are doing repetative work in our brute force solution. Instead of finding non zero element's index for i, we can use two pointers

// Time Complexity : O(n)
// Space Complexity : O(1)

class Solution {
public:
    //Two pointer approach
    //idea is to maintain one pointer for zero element
    //and while traversing array if we find non zero elemet, swap it with zero element and incerement the pointer who is pointing to zero element 
    void moveZeroes(vector<int>& nums) {
        
        int n = nums.size();
        int zeroIdx = 0;
        
        for(int i = 0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[zeroIdx]);
                zeroIdx++;
            }
        }
        
    }
};
