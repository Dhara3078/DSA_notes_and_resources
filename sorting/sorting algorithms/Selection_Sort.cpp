//Time complexity : Wrost case = O(N^2)
//                  Average case = O(N^2)
//                  Best case = O(N^2)
//Selection sort is not stable and In-place sorting algorithm
//Does less memory writes compared to Quick sort, Merge sort, Insertion sort, etc. But cycle sort is optimal in terms of memory writes.
//Idea: run outer loop 0 to n-1 find last index of array by n-i-1, then find index of max element of array from starting 0 to last index. After that swap element at index of last and element at maxIndex

void SelectionSort(int arr[],int n){
  for(int i=0;i<n;i++){
    //find the max item in the remaining array and swap with correct index
    int last = n-i-1;
    int maxIndex = 0; //assume that 1st index is index of max element
    for(int j=0;j<=last;j++){
      if(arr[maxIndex]<arr[j])
        maxIndex=j;
    }
    swap(arr[last],arr[maxIndex]);
  }
}
