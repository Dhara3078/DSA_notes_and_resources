//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/boolean-matrix-problem-1587115620/1

//Function to modify the matrix such that if a matrix cell matrix[i][j]
    //is 1 then all the cells in its ith row and jth column will become 1.
    void booleanMatrix(vector<vector<int> > &matrix)
    {
        //Idea is to make 2 array one for row and other for column and fill their all element with 0
      //travers matrix if we find matrix[i][j]==1 make row[i]=1 and col[j][j]=1
      // now again traverse and if row[i]==1 make that whole row of matrix element to 1
      //again traverse and if col[j]==1 make that whole column of matrix element to 1
     
        int row[matrix.size()]; fill(row,row+matrix.size(),0);
        int col[matrix[0].size()]; fill(col,col+matrix[0].size(),0);
        
        for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[0].size();j++){
                if(matrix[i][j]==1){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        
        for(int i=0;i<matrix.size();i++){
            if(row[i]==1){
                for(int j=0;j<matrix[0].size();j++)
                    matrix[i][j]=1;
            }
        }
        for(int i=0;i<matrix[0].size();i++){
            if(col[i]==1){
                for(int j=0;j<matrix.size();j++)
                    matrix[j][i]=1;
            }
        }
    }
