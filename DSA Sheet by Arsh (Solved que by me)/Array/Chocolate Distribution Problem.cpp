//Link for the question
//https://practice.geeksforgeeks.org/problems/chocolate-distribution-problem3825/1/

//Time Complexity : O(nlogn)
//Space Complexity : O(1)

//idea is to sort the array and after that find the difference between m elements (kind of window sliding) 

class Solution{
    public:
    long long findMinDiff(vector<long long> a, long long n, long long m){
    
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
