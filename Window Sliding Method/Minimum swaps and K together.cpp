//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/minimum-swaps-required-to-bring-all-elements-less-than-or-equal-to-k-together4847/1


int minSwap(int *arr, int n, int k) {
    // Complet the function
    int count=0; // count of element which are smaller than or equal to k 
    for(int i=0;i<n;i++){
        if(arr[i]<=k)
            count++;
    } // now count variable becomes size of window
    int bad=0;  // count of element which are greater than k in 1st window
    for(int i=0;i<count;i++){
        if(arr[i]>k)
            bad++;
    }//now bad variable becomes number of swaps required in 1st window
    int res=bad; // stores the value of swaps required in 1st window in res variable
    bad=0;  //update the value of bad to zero
    int i=0,j=0; 
    while(j<n){
        if(arr[j]>k){ 
            bad++;
        }
       
        if(j-i+1==count){ //if we hit window size 
            res=min(res,bad); //we update res if bad variable is less than previous res
            if(arr[i]>k){ // for sliding the window we need to decrese value of bad if arr[i]
                bad--;    // is greater than k
            }
            i++; //for sliding the window we increment value of i
        }
        j++;
    }
    
    return res;
}
