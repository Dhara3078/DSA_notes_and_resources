//Linke for the question⬇⬇
//https://leetcode.com/problems/find-the-duplicate-number/
//Time complexity = O(N)
//idea is to use cyclic sort 
    //just do one modification in cyclic sort
    //add extra candition for duplicates
    int findDuplicate(vector<int>& nums) {
        int i=0;
        while(i<nums.size()){
           if(i!=nums[i]-1 ){
             if(nums[i]!=nums[nums[i]-1]) //this condition is for duplicates 
                            swap(nums[i],nums[nums[i]-1]);
                        else
                            return nums[i];
                    }
                    else
                      i++;
                  }
        return -1;
    }
