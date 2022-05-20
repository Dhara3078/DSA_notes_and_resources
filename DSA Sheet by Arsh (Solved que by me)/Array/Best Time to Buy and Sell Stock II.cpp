//Link for the question
//https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/

//Time Complexity : O(n)
//Space Complexity : O(1)

class Solution {
public:
    //Used Kadane's algo with just little modification
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        
        int currProfit = 0;
        int maxProfit = 0;
        
        for(int i = 1;i<n;i++){
          if(prices[i]>prices[i-1]){
                currProfit+=prices[i]-prices[i-1];
            }else if(currProfit<0){
                currProfit = 0;
            }
            maxProfit = max(maxProfit,currProfit);
        }
        
        return maxProfit;
    }
};
