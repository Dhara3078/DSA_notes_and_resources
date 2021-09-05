//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/nitika-and-her-queries4804/1/?category[]=prefix-sum&category[]=prefix-sum&page=1&sortBy=submissions&query=category[]prefix-sumpage1sortBysubmissionscategory[]prefix-sum#
 vector<int> specialXor(int N, int Q, int a[], vector<int> query[])
    {
        // code here
        vector<int>res;
        //making prefix Xor array
        for(int i=1;i<N;i++){
            a[i]^=a[i-1];
        }
        
        for(int i=0;i<Q;i++){
            int l=query[i][0]-1;
            int r=query[i][1]-1;
            int Xor=a[N-1]^a[r]^a[l-1];//xor property n^n=0
           
            res.push_back(Xor);
        }
        
        return res;
        
    }
