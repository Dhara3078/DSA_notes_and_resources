//Time Complexity : O(nlogn)
//Space Complexity : O(1)

class Solution {
public:
    //intuition:
    //idea is to use binary search on range 1 to n (where n = nums.size()-1)
    //for example we have [1,3,4,2,2]
    //if we take 3 and find all the elements less than or equal to 3
    // there are 4 elements less than or equal to 3
    //that means there is duplicate element between 1 to 3
    //why? because as we know no of elements less than or eqaul to 3 should be equal to 3 if it does not contain any duplicate
    //Now we now that element which is duplicate is lies between 1 to 3 
    //if no of element less than or equal to 3 are less than or equal to 3 that means there is no duplicate that lies between 1 to 3, That means we need to find duplicate that between 3 to n
    //thats how we are reducing range 
    
    int findDuplicate(vector<int>& nums) {
        int low = 1, high = nums.size()-1;
        while(low<high){
            int mid = (low+high)/2;
            int cnt = 0;
            for(int x:nums){
                if(x<=mid)
                    cnt++;
            }
            if(cnt<=mid)
                low=mid+1;
            else
                high=mid;
        }
        return high;
    }
};
