//link for the question⬇⬇
//https://leetcode.com/problems/minimum-number-of-days-to-make-m-bouquets/

 bool ispossible(vector<int>& bloomDay, int m, int k,int mid){
        int flower=0,bouquets=0;
        for(int i=0;i<bloomDay.size();i++){
            if(bloomDay[i]<=mid){//if array element is less then or = to mid we do flower++
                flower++;
            }
            else{// this is for adjacent flower condition
                flower=0;
            }
            if(flower==k){//if flower value == k increament bouquets and make flower = zero
                bouquets++;
                flower=0;
            }
        }
        if(bouquets>=m){//if bouquets value >= m return true 
            return true;
        }
        
        return false;
    }
    int minDays(vector<int>& bloomDay, int m, int k) {
        //binary search 
        //similar to book allocation just change in ispossible function
        if(bloomDay.size()<m*k)//for corner case when we have less number of flowers
            return -1;
        int start=0;
        int end=*max_element(bloomDay.begin(),bloomDay.end());//initialize end to max element of bloomDay array
        while(start<end){
            int mid=start+(end-start)/2;
            if(ispossible(bloomDay,m,k,mid)){
                end=mid;
            }
            else
                start=mid+1;
        }
        return start;//we can return anyone from start and end because they will point to same value after loop termination
    }
