//link for the question⬇⬇
//https://leetcode.com/problems/split-array-largest-sum/


//for checking that can we make equal or less  number of parts to m
    bool isPossible(int mid,int m,vector<int>& nums){
        //we make one sum variable and store prefix sum to it
        int sum=0;
        int parts=1;//we can say whole array is already one part so we initially initialize parts variable to 1
        for(int i=0;i<nums.size();i++){
            if(sum+nums[i]>mid){//when sum + current element of array becomes greater than mid increament parts value and make sum value zero
                parts++;
                sum=0;
            }
            sum+=nums[i]; //for prefix sum
        }
        if(parts<=m)//after loop if parts value is = or less than m return true
            return true;
        return false;
    }

    int splitArray(vector<int>& nums, int m) {
        //idea is to apply binary search 
        //start pointer value will be max element in array
        //and end pointer value will be total sum of array elements
         int start=INT_MIN;
         int end=0;
        for(int i=0;i<nums.size();i++){
            start=max(start,nums[i]);
            end+=nums[i];
        }
        //binary search
        while(start<end){// we will stop the loop when start==end
            int mid=start+(end-start)/2; //calculating mid 
            
            if(isPossible(mid,m,nums)){ //if mid is possible answer than upadate end to mid
                end=mid;
            }
            else 
                start=mid+1;
        }
        
        return end;//start and end have same value therefore we can return anyone from start and end
    }
