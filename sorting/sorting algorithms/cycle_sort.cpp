//This sorting algorithm is used when given numbers from range 1 to N (continues numbers)
//Idea : We are running while loop till n-1 and we check if index i is not equal to arr[i]-1 then swap arr[i] and arr[arr[i]-1]
//       else do i++
//       we are running loop till n-1 because if 1 to n-1 elements are in sorted order then last last element will alse be at sorted order
//Time complexity : Wrost case = O(N)
//                  Average case = O(N)
//                  Best case = O(N)


void cycleSort (int arr[] ,int n){
  int i=0;
  while(i<n-1){
    if(i!=arr[i]-1)
      swap(arr[i],arr[arr[i]-1]);
    else
      i++;
  }
}
