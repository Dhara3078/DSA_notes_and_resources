//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=-1&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]-1page1sortBysubmissionscategory[]prefix-sum

int maximumSumSubarray(int K, vector<int> &Arr , int N){
    
    // using window sliding method and prefix sum
    int i=0,j=0;
    int sum=0,Max=INT_MIN; // sum=current sum and Max= Maximum sum of K size subarray
    
    while(j<N){
        // computing sum
        sum+=Arr[j]; 
        //when window size is less than K 
        if(j-i+1<K){
        j++;
        }
        // when window size equal to K update Max and subtract previous sum of arr[i] 
        // from sum variable after that increment i and j
        else if (j-i+1==K){
            Max=max(Max,sum);
            sum=sum-Arr[i];
            i++;
            j++;
        }
    }
    return Max;
    
   }
