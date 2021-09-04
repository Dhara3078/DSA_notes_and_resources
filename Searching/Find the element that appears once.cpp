//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/element-appearing-once2552/1#

int search(int A[], int N){
	     int start = 0, end = N - 1;
 
        if (N== 1) // If only one element is in the array
            return A[0];
 
        if (A[start]!= A[start + 1]) // If the first element is the element that appears only once
            return A[start];
 
        if (A[end]!= A[end- 1]) // If Last element is the element that appears only once
            return A[end];
 
        // Binary Search
        while (start <= end) {
           int mid = start + (end - start) / 2;
            //when mid is the element that appear once
            if (A[mid] != A[mid - 1]
                && A[mid] != A[mid + 1])
                return A[mid];
            //There are 2 case when we move start to mid +1
            //case 1: when A[mid] == A[mid + 1] and mid is even that means left side has even element and it doesn't contaian element that apper once
            //case 2: when A[mid] == A[mid - 1] and mid is odd that means right side has odd element and it does contain element that apper once
            else if ((A[mid] == A[mid + 1] && mid % 2 == 0) || (A[mid] == A[mid - 1] && mid % 2 != 0))
                start = mid + 1;
            
            else
                end = mid - 1;
        }
        // If no such element found
        return -1;
	}
