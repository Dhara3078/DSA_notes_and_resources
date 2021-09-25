//Linke for the question⬇⬇
//Time complexity = O(N)

//idea is to use cyclic sort
     void cycleSort (vector<int> &arr,int n){
              int i=0;
              while(i<n){
                if(arr[i] > 0 && i!=arr[i]-1 && arr[i]<n && arr[i]!=arr[arr[i]-1]) // to handle negative number add arr[i]>0 condition 
                  swap(arr[i],arr[arr[i]-1]);
                else
                  i++;
              }
        }
    int firstMissingPositive(vector<int>& nums) {
        cycleSort(nums,nums.size());
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]-1)
                return i+1;
        }
        
        return nums.size()+1;
    }
