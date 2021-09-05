//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/maximum-sum-rectangle2948/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=1&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]1page1sortBysubmissionscategory[]prefix-sum
int kadaneAlgo(vector<int>& nums){
        int maxSum=INT_MIN;
        int sum=0,i=0;
        while(i<nums.size()){
            sum+=nums[i];
            if(sum>maxSum){
                maxSum=sum;
            }
            if(sum<0){
                sum=0;
            }
            
            i++;
        }
        
        return maxSum;
    }
    
    int maximumSumRectangle(int R, int C, vector<vector<int>> M) {

        int maxSum=INT_MIN;
        for(int i=0;i<R;i++){
            vector<int> ans(C);
            for(int j=i;j<R;j++){
                for(int k=0;k<C;k++){
                    ans[k]+=M[j][k];
                }
                maxSum=max(maxSum,kadaneAlgo(ans));
            }
        }
        return maxSum;
    }
