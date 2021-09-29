//Link for the question⬇⬇
//https://leetcode.com/problems/search-a-2d-matrix/
//We can use this ;ogic only when matrix is shorted
//start searching from right most element matrix[0][matrix[0].size()-1]
//if matrix[i][j]>target go left side means decrement column value j
//if matrix[i][j]<target increment row value

bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int i=0,j=matrix[0].size()-1;
        while(i<matrix.size() && j>=0){
            if(matrix[i][j]==target){
                return true;
            }
            else if (matrix[i][j]>target)
                j--;
            else
                i++;
        }
        
        return false;
    }
