//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/merge-two-sorted-arrays5135/1#

void merge(int arr1[], int arr2[], int n, int m) {
	    // idea is to make two pointers 
	    //one pointer will points to last element of arr1
	    //other pointer will points to starting element of arr2
	    //run loop till i>=0 and j<m 
	    int i=n-1,j=0;
	    while(i>=0 && j<m){
	        if(arr1[i]>arr2[j]) //if arr1[i] is less than arr2[j]  
	        swap(arr1[i],arr2[j]); //swap both element
	        
	        i--; //decrement i
	        j++;//increment j
	        
	    }
	    //after while loop arr1 will conatain all smaller elements than arr2
	    //but they will we not sorted
	    //to sort them use stl function sort
	sort(arr1,arr1+n);
	sort(arr2,arr2+m);
	    
	}
