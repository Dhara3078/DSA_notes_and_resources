//Link for the question
//https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/

class Solution {
public:
//     method 1: recursion
//     Note : it will give TLE
//     we have to choice for every step 1. take left element or 2. take right element
//     make two recursion call for left and right
//     return maximum of left and right 
//     base condition if  k is <= 0 return mx (mx = maxSum)
    
    // method 2: sliding window 
    // idea is to use window silding method
    // step 1: compute the sum of first window from starting of array
    // Step 2: declare a maxSum variable (final answer will be stored in it) and assign its value as sum
    // step 3: Now take one pointer j that points to last element of array
    //        now we will run loop from i=k-1  to i >= 0 and replace sum of that element with last element of array and decrement j and i
    // Step 4: update maxSum value as sum if current sum > previous maxSum value
    // Step 5: return maxSum
    int maxScore(vector<int>& cardPoints, int k) {
        int sum = 0;
        int n = cardPoints.size();
        for(int i = 0; i < k; i++){
            sum+=cardPoints[i];
        }
        int maxSum = sum;
        int j = n-1;
        for(int i = k-1; i>=0; i--){
            sum+=cardPoints[j]-cardPoints[i];
            maxSum = max(sum,maxSum);
            j--;
        }
        return maxSum;
    }
};
