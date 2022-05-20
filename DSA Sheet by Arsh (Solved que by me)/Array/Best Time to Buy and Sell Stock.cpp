//Link for the question
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock/

//Time Complexity : O(n)
//Space Complexity : O(1)

class Solution {
public:
    //using kadane's algo
    //we can solve it by normal way but it in array negative value are given we need use kadane's algo to solve the question
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0)
            return 0;
        
        int currPro = 0;
        int maxProfit = 0;
        
        for(int i=1;i<prices.size();i++){
            if(currPro+prices[i]-prices[i-1]<0){
                currPro=0;
            }else{
                currPro+=prices[i]-prices[i-1];
            }
            
            maxProfit=max(maxProfit,currPro);
        }
        
        return maxProfit;
    }
};
