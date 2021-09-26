//Idea is to divide array into to part and sort them after sorting merge both array (divide, conquer and merge)
//Stable sorting algorithm
//Time complexity : Wrost case = O(NlogN)
//                  Average case = O(NlogN)
//                  best case = O(NlogN)
// Aux space : O(N)
//Used in External sorting

void mergeSort(int arr[], int l, int r){
  if(l<r){
    int mid=l+(r-l)/2;
    mergeSort(arr,l,mid); //calling mergeSort function for left part of array 
    mergeSort(arr,mid+1,r); //calling mergeSort function for right part of array
    merge(arr,l,mid,r); //merge function to combine both left and right part of array
  }
}

void merge(int arr[], int l, int mid, int r){
  int n1=mid-l+1, n2=r-mid;
  int left[n1],right[n2]; //making 2 aux array left and right, left array conatain n1 and right array contain n2 element
  for(int i=0;i<n1;i++)// adding main array element from l to mid-l+1 into left array
    left[i]=arr[l+i];
  for(int i=0;i<n2;i++)//adding main array element from mid+1 to r-mid into right array
    right[i]=arr[m+1+i];
  int i=0; //for left array
  int j=0; //for right array
  int k=l; //for main array 
  while(i<n1 && j<n2){
    if(left[i]<=right[j]) //if element in left array is less than = to element in right array 
      arr[k++]=left[i++]; // add left element in main array and increment i and k
    else                  //else add right element in `main array and increment j and k
      arr[k++]=right[j++];
  }
  while(i<n1) //if there is element left to add from left array to main array, add them 
    arr[k++]=left[i++];
  
  while(j<n2) ////if there is element left to add from right array to main array, add them 
    arr[k++]=right[j++];
  
}
