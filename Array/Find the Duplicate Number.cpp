//link for question⬇⬇
//https://leetcode.com/problems/find-the-duplicate-number/


//method 1: using extra space (vector) 
//Time complexity : o(n)
//space complexity : o(n)
int findDuplicate(vector<int>& nums) {
        //idea is to make temp vector and add nums vector's element in its index and if we find that temp element 
        //already have some value we return that value 
        int n=nums.size();
        vector<int> temp(n+1,0);  // we initialize all element of vector temp to zeros 
        for(int i=1;i<=n;i++){
           
            if(temp[nums[i-1]]==0){  // adding nums element to temp vector index
                temp[nums[i-1]]=nums[i-1];
            }
            else                    // if temp vector's element is not zero that means it's a repeating number
                return nums[i-1];
        }
        return -1;
    }

//method 2: using cycle sort
//idea is to use cyclic sort 
//just do one modification in cyclic sort
//add extra candition for duplicates
//Time complexity : o(n)
//space complexity : o(1)
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
