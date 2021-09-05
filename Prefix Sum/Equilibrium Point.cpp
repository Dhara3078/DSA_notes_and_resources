//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/equilibrium-point-1587115620/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=0&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]0page1sortBysubmissionscategory[]prefix-sum

// Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
        // Your code here
        
        int sum=0,leftsum=0;
        if(n==1)
          return 1;
        for(int i=0;i<n;i++){
            sum+=a[i];
        }
        
        for(int i=0;i<n;i++){
            sum-=a[i];
            if(sum==leftsum)
            return i+1;
            else
             leftsum+=a[i];
        }
        
        
        return -1;
    }
