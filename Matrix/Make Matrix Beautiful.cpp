//link fot the question⬇⬇
//https://practice.geeksforgeeks.org/problems/make-matrix-beautiful-1587115620/1

//Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        vector<int> row(n);
        vector<int> col(n);
        int maxSum=0,res=0;
        for(int i=0;i<n;i++){
            row[i] = accumulate(matrix[i].begin(),matrix[i].end(),0); 
            maxSum = max(maxSum,row[i]); 
            int sum = 0;
            for(int j = 0; j < n; j++){ 
                sum += matrix[j][i];
            }
            col[i] = sum;
            maxSum = max(maxSum,sum);
        }
        
        
        for(int i=0;i<n;i++){
            res+=(2*maxSum-row[i]-col[i]);
        }
        
        return res/2;
    } 
