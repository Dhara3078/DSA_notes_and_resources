//Link for the question:
//https://leetcode.com/problems/container-with-most-water/submissions/

 //Idea is to use two pointer approach
    //Step 1: make two pointer: left and right
    //        left points to first element of height array and right points to last element of array
    //Step 2: run while loop till left<right
    //        compute the value of width(right-left), height(min of left and right element) and area(height*width)
    //Step 3: if current area is maximum than previous maxWater value, then update maxWater value to current area
    //Step 4: if left element's height is less than right element's height then increment left
    //step 5: else decrement right
    //step 6: return maxWater
 

class Solution {
public:
   
    int maxArea(vector<int>& height) {
        int left = 0, right = height.size()-1; //step 1
        int maxWater = 0;
        while(left<right){ //step 2
            int width = right - left;
            int h = min(height[left],height[right]);
            int area = width*h;
            
            maxWater = max(maxWater,area); //step 3
            
            if(height[left]<=height[right]) //step 4
                left++;
            
            else   //step 5
                right--;
        }
        
        return maxWater; //step 6
    }
};
