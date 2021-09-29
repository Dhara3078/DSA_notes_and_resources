//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    // code here
	    int i=0,j=m-1,res=-1;
        while(i<n && j>=0){
            
            if (arr[i][j]==1){
                res=i;
                j--;
            }
            else
                i++;
        }
        
        return res;
	}
