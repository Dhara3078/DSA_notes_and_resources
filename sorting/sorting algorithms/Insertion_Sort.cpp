//Idea: Take an element from the unsorted array, place it in its corresponding position in the sorted part and shift the elements accordingly.
//or for every index put that index element at the correct index of left hand side.
//Time complexity: Wrost case = O(N^2) (when array is sorted in descending order)
//                 Average case = O(N^2)
//                 Best case = O(N) (when array is already sorted)
//Adaptive (steps get reduced if array is sorted)
//In Insertion sort no. of swaps reduced compare to bubble sort
//stable and In-place algorithm
//Used for smaller values of N and works good when array is partially sorted


void InsertionSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    for(int j=i+1;j>0;j--){
      if(arr[j]<arr[j-1])
        swap(arr[j],arr[j-1])
      else //because this LHS array is already sorted
        break;
    }
  }
}
