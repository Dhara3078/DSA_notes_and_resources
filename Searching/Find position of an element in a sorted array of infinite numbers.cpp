//link for the question⬇⬇
//https://www.geeksforgeeks.org/find-position-element-sorted-array-infinite-numbers/

#include <iostream>
using namespace std;

int bsearchForinfinite(int arr[],int target){
    //first start with a window size of two
    int start=0;
    int end=1;
    
    //condition for the target to lie in the range
    while(target>arr[end]){
        int newStart=end+1;
        //for double the window size end = end + window size*2
        end = end + (end-start+1)*2;
        start=newStart;
    }
    
   //binary search
    while(start<=end){
        
        int mid=start +(end-start)/2;
        
        if(target<arr[mid]){
            end=mid-1;
        }
        else if(target>arr[mid]){
            start=mid+1;
        }
        else{
            return mid;
        }
    }
    return -1;
}
int main() {
	
	
	int arr[]={1,2,3,4,5,7,89,10,100,120,170,190,200,223,234,780};
	int target=5;
	//In infinite array we can not find lenght of array 
	//for applying  binary search we nead to find range in array for target element 
	//for finding range we will apply same as binary search logic reverse 
	//we will start with start  pointer at index zero and end pointer at index 1 ,then double it every time
	//In wrost case we can find range in logN time
	int ans=bsearchForinfinite(arr,target);
	cout<<ans<<endl;
	return 0;
}
