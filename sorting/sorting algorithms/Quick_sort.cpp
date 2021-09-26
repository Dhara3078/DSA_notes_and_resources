//Idea is to use partitioning (Hoare or Lomuto partition)
//Divide and conquer Algorithm
////Time complexity : Worst case = O(N^2)
//                  Average case = O(NlogN)
//                  best case = O(NlogN)
// Aux space : O(N)
//Despite having higher worst case time, it is prefered over other algorithms many time due to (i) tail recursive 
//                                                                                             (ii) In-place
//                                                                                             (iii) cache friendly
//                                                                                             (iv) Average case time complexity O(NlogN)

void quickSort(int arr[],int l, int h){
  if(l<h){
    int pivot = partition(int arr[],int l,int h);
    quickSort(arr, l, pivot-1); //sorts the left side of pivot.
    quickSort(arr, pivot+1,h); //sorts the right side of pivot.
  }
}



//In partition we chose one pivot and place all element less than or = pivot to left side of pivot and place all element greater than pivot to right side of pivot
//in Lomuto partition we chose last element of array as pivot and in Hoare partition we chose first element of array as pivot 
int partition(int arr[], int l, int h){
  int pivot = arr[l];
  int i=l; //points to start of array
  int j=h; //points to end of array
  while(i<j){
    while(arr[i]<=pivot) //if element at index of i is less than or = to pivot do i++
      i++;
    while(arr[j]>pivot) //if elemnt at index of j is greater than pivot do j--
      j--;
    if(i<j) //check if i is less than j , swap both element at index i and j
      swap(arr[i],arr[j]);
  }
  swap (arr[j],arr[l]); //now we need to place pivot at it's right index for that swap element at j and l
  
  return j; //return j
}
