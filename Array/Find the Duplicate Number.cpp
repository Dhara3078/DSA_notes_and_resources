//link for question⬇⬇
//https://leetcode.com/problems/find-the-duplicate-number/

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
