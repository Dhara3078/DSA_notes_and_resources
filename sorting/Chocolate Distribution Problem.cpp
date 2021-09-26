//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1



long long findMinDiff(vector<long long> a, long long n, long long m){
    //idea is to sort array 
    //and use to pointer approach
    //one pointer at start and other at end of array
    //find differance between them and update res value if current diff is minimum than previous
      sort(a.begin(),a.end());
      
    long int diff, e=m-1,s=0,res=(a[m-1]-a[0]);
    while(e < n)
    {
        diff=a[e] - a[s];
        res=min(res, diff);
        s++;
        e++;
    }
    return res;
    }   
