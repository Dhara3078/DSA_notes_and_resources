//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/mean-of-range-in-array2123/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=0&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]0page1sortBysubmissionscategory[]prefix-sum
 vector<int> findMean(int arr[],int queries[],int n,int q)
    {
        // Complete the function
        vector<int> res;
        for(int i = 1; i < n; i++){
            arr[i] += arr[i-1];
        }
        for(int i=0;i<q;i+=2){
            int l=queries[i];
            int r=queries[i+1];
            int sum=0,mean;
            if(l==0){
                sum=arr[r];
            }
            else{
                sum=arr[r]-arr[l-1];
            }
             mean=sum/(r-l+1);
            
            res.push_back(mean);
        }
        
        return res;
    }
