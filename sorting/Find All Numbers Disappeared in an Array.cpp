//Link for the question⬇⬇
//https://leetcode.com/problems/find-all-numbers-disappeared-in-an-array/

 //idea is to use cyclic sort
    void cycleSort (vector<int> &arr,int n){
              int i=0;
              while(i<n){
                if(i!=arr[i]-1) // to handle duplicates add arr[i]!=arr[arr[i]-1] condition
                  swap(arr[i],arr[arr[i]-1]);
                else
                  i++;
              }
    }
    vector<int> findDisappearedNumbers(vector<int>& nums) {
         cycleSort(nums,nums.size());
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]-1)
                res.push_back(i+1);
        }
        
        return res;
    }
