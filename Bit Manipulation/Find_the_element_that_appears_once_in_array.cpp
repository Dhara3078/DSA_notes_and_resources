// link for question :
// https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1


int search(int A[], int N){
	    //code
	    int res=0;
	    for(int i=0;i<N;i++)
	    {
	        res^=A[i]; // using Xor operator to remove repeating element // Xor properties : 0^N=N , N^N=0
	    }
	    return res;
	}
