//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1/?category[]=sliding-window&category[]=sliding-window&difficulty[]=-2&difficulty[]=-1&page=1&sortBy=submissions&query=category[]sliding-windowdifficulty[]-2difficulty[]-1page1sortBysubmissionscategory[]sliding-window


int maximumSumSubarray(int K, vector<int> &Arr , int N){
    
    // code here 
    int i=0,j=0;
    int sum=0,Max=INT_MIN;
    
    while(j<N){
        sum+=Arr[j];
        if(j-i+1<K){
        j++;
        }
        else if (j-i+1==K){
            Max=max(Max,sum);
            sum=sum-Arr[i];
            i++;
            j++;
        }
    }
    return Max;
    
    }
