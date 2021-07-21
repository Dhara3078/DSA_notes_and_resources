//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/number-of-subarrays-with-maximum-values-in-given-range5949/1/?category[]=sliding-window&category[]=sliding-window&difficulty[]=1&page=1&sortBy=submissions&query=category[]sliding-windowdifficulty[]1page1sortBysubmissionscategory[]sliding-window

    long countSubarr(int n){
        return n*(n+1)/2;
    }
    
    long countSubarrays(int a[], int n, int L, int R)
    {
        // Complete the function
        int csL=0,csR=0; // csL= count of elemnt which are < L 
        long res=0 ;  //csR= count of elemnt which are <= R
        
        for(int i=0;i<n;i++){
            if(a[i]<L){
                csL++;
                csR++;
            }
                
            else if (a[i] > R) {
                res += (countSubarr(csR) - countSubarr(csL));
                csL = 0;
                csR = 0;
            }
            
            else {
                res -= countSubarr(csL);
                csL = 0;
                csR++;
            }

        }
        
        res += (countSubarr(csR) - countSubarr(csL));
        
        return res;
    }
