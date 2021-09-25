//Link for the question⬇⬇
//https://leetcode.com/problems/missing-number/

//idea is to use cyclic sort 
    //in cyclic sort if element is equal to n don't do anything
    //after sorting run one for loop and check if index i equal to element if not return i
    //after loop if we don't fing missing element then return n
    void cycleSort (vector<int> &arr,int n){
              int i=0;
              while(i<n){
                if(i!=arr[i] && arr[i]!=n)
                  swap(arr[i],arr[arr[i]]);
                else
                  i++;
              }
        }
    int missingNumber(vector<int>& nums) {
        cycleSort(nums,nums.size());
        for(int i=0;i<nums.size();i++){
            if (nums[i]!=i)
                return i;
        }
        return nums.size();
    }
