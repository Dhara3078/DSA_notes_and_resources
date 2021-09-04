//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/count-pairs-with-given-sum5022/1

int getPairsCount(int arr[], int n, int k) {
        
        unordered_map<int,int> freq;
        int res=0;
        for(int i=0;i<n;i++){
            res+=freq[k-arr[i]];
            freq[arr[i]]++;
        }
        return res;
    }
