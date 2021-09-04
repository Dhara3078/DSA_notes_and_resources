//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/find-pair-given-difference1559/1#

bool findPair(int arr[], int size, int n){
    //idea is that first sort array and then make 2 pointer left and right
    //right pointer will be one idex ahead of left pointer
    //when element at right - element == n return true
    //if element at right - element at left is less than n we do right++
    //else left++
    sort(arr,arr+size);
    int left=0,right=1;
    while(left<size-1 && right<size){
        if(left!=right && arr[right]-arr[left]==n)
        return true;
        else if(arr[right]-arr[left]<n){
            right++;
        }
        else{
            left++;
        }
    }
    return false;
    
}
