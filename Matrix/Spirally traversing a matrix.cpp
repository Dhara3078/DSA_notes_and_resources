//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/spirally-traversing-a-matrix-1587115621/1



//Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int> > matrix, int r, int c) 
    {
        // code here 
        vector<int> res;
        if(matrix.size()==1){
            for(int i=0;i<matrix[0].size();i++)
              res.push_back(matrix[0][i]);
             return res;
        }
        
        if(matrix[0].size()==1){
            for(int i=0;i<matrix.size();i++)
              res.push_back(matrix[i][0]);
             return res;
        }
        
        int top_r=0,right_c=matrix[0].size()-1;
        int bottom_r=matrix.size()-1,left_c=0;
        
        while(top_r<=bottom_r && left_c<=right_c){
            for(int i=left_c;i<=right_c;i++){
                res.push_back(matrix[top_r][i]);
            }
            top_r++;
            for(int i=top_r;i<=bottom_r;i++){
                res.push_back(matrix[i][right_c]);
            }
            right_c--;
            if(top_r<=bottom_r){
            for(int i=right_c;i>=left_c;i--){
                res.push_back(matrix[bottom_r][i]);
                }
              
            }
            bottom_r--;
            if(left_c<=right_c){
            for(int i=bottom_r;i>=top_r;i--){
                res.push_back(matrix[i][left_c]);
                }
            }
            left_c++;
        }
        
        return res;
    }
