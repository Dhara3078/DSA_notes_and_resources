//Link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/largest-subarray-of-0s-and-1s/1/?category[]=sliding-window&amp;category[]=sliding-window&amp;page=1&amp;sortBy=submissions&amp;query=category[]sliding-windowpage1sortBysubmissionscategory[]sliding-window%27#


int maxLen(int arr[], int N)
    {
        // idea is to convert all 0 to -1 and make prefix sum 
        unordered_map<int,int> M;
        int pre_sum=0;
        int maxlen=0;  // it represent size of window whose sum zero means it has equal number of 1s and 0s
        for(int i=0;i<N;i++){
            if(arr[i]==0)  // while adding array element we check if it is 0 than replace it with -1
            pre_sum=pre_sum-1;
            else             // else add 1 as it is
            pre_sum+=arr[i];
            
            if(pre_sum==0)   // if sum become 0 than we update maxlen with size of window
            maxlen=i+1;
            
            if(M.find(pre_sum)!=M.end()) // checks if sum is already present in map or not
            {
                if(maxlen<i-M[pre_sum]) // if next window has maximum length than we again update maxlen
                maxlen=i-M[pre_sum];
            }
            else // if sum is not present than insert sum as key and it's insex as value
            M[pre_sum]=i;
            
        }
        return maxlen;  // returns max length of subarray with equal number of 1s and 0s
    }
