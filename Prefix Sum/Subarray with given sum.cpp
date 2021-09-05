//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/subarray-with-given-sum-1587115621/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=0&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]0page1sortBysubmissionscategory[]prefix-sum
vector<int> subarraySum(int arr[], int n, int s)
    {
        // Your code here
        int sum=0,i=0,j=0;
        vector<int> res;
        while(j<n){
            sum+=arr[j];
        
            if(sum>s){
                while(sum>s){
                sum=sum-arr[i];
                i++;
                }
                if(sum==s){
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
                }
            }
            else if(sum==s) {
                res.push_back(i+1);
                res.push_back(j+1);
                return res;
            }
            
            j++;
             
        }
        res.push_back(-1);
        return res;
    }
