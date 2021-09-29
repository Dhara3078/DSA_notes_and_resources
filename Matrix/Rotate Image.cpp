//Link for the question⬇⬇
//https://leetcode.com/problems/rotate-image/

void rotate(vector<vector<int>>& matrix) {
      int n=matrix.size();
      //idea is to first swap all element of upper tringle with lower tringle  
      for(int i=0;i<n;i++){
          for(int j=i+1;j<n;j++)
              swap(matrix[i][j],matrix[j][i]);
      }
     //after that reverse every row    
     for(int i=0;i<n;i++)
         reverse(matrix[i].begin(),matrix[i].end());
    }
