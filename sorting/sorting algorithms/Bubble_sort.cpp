//Bubble sort is comparision base sorting algorithm
//Idea: if arr[i]>arr[i+1] swap them. To place all elements in their respective position , we have to do the following operation N-1 times.
//With the first pass through the array, the larget element came to the end , like wise with nth pass through the array, the nth largest element come to nth last position
//therefore internal loop will run till j<n-i-1 
//Time complexity : Wrost case = O(N^2) (when array is sorted in descending order)
//                  Average case = O(N^2)
//                  Best case = O(N) (when array is already sorted)
//Bubble sort is also knows as sinking sort and exchange sort.
//Bubble sort is Inplace and Stable sorting algorithm.

void BubbleSort(int arr[], int n){
  for(int i=0;i<n-1;i++){
    bool swapped = false;
    //after each loop, max item will come at the last respective index
    for(int j=0;j<n-i-1;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
        swapped = true;
      }
    }
    if(swapped==false)//if you did not swap for a particular value of i , it means array is already sorted hence break the loop
        break;
  }
}
