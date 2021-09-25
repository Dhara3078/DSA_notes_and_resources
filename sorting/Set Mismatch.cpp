//Link for the question⬇⬇
//https://leetcode.com/problems/set-mismatch/
//Time complexity = O(N)

//idea is to use cyclic sort 
    void cycleSort (vector<int> &arr,int n){
              int i=0;
              while(i<n){
                if(i!=arr[i]-1 && arr[i]!=arr[arr[i]-1]) //to handle duplicates
                  swap(arr[i],arr[arr[i]-1]);
                else
                  i++;
              }
    }
     
    vector<int> findErrorNums(vector<int>& nums) {
        cycleSort(nums,nums.size());
        vector<int> res;
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]-1){
                res.push_back(nums[i]); //duplicate number
                res.push_back(i+1);     //missing number
            }
                
        }
        return res;
    }
