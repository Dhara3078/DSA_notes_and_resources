//Function to return the count of number of elements in union of two arrays.
    int doUnion(int a[], int n, int b[], int m)  {
        //hashing method
        unordered_set<int> S; 
        int res=0;
        
        for(int i=0;i<n;i++){
            S.insert(a[i]);    // unordered set removes duplicates 
        }
        
        for(int i=0;i<m;i++){
            S.insert(b[i]);
        }
        
        res=S.size();// returns  size of set or number of element it has
        
        return res;
    }
