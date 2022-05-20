//Link for the quetion 
//https://leetcode.com/problems/two-sum/

//Brute force solution would be using two for loop

//Time Complexity : o(n)
//Space Complexity : O(n)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> mp;
        vector<int> res(2);
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                res[0]=i;
                res[1]=mp[target-nums[i]];
                break;
            }
            mp[nums[i]]=i;
        }
        return res;
    }
};
