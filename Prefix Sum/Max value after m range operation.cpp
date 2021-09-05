//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/max-value-after-m-range-operation4300/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=-1&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]-1page1sortBysubmissionscategory[]prefix-sum
int findMax(int n, int m, int a[], int b[], int k[])
	{
	    // Your code goes here
	    vector<int> v(n+1,0);
	    for(int i=0;i<m;i++){
	        v[a[i]]+=k[i];
	        v[b[i]+1]-=k[i];
	    }
	    
	    long long sum=0,res=INT_MIN;
	    for(int i=0;i<n;i++){
	        sum+=v[i];
	        res=max(res,sum);
	    }
	    
	    return res;
	}
