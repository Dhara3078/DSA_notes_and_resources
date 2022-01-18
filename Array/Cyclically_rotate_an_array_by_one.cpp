//link for question⬇
//https://practice.geeksforgeeks.org/problems/cyclically-rotate-an-array-by-one2614/1
//Time complexity : 0(n) where n = number of array element

//Step 1: store last element of array
//Step 2: run loop from right to left expect first element and assign value of i-1 element's to i index element
//step 3: now assign stored last element of array to first element of array
void rotate(int arr[], int n)
{
    int temp=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=temp;
}
