//link for the question⬇⬇
//https://leetcode.com/problems/peak-index-in-a-mountain-array/

int peakIndexInMountainArray(vector<int>& arr) {
        //using binary search
        int start=0;
        int end=arr.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1] )
                //our peak element will be always greater than its left and right element
                return mid;
            else if(arr[mid]<arr[mid-1])
                //if mid element is less than its left element then we move end pointer to mid because we know right half won't cantain peak element but current mid may be peak element 
                end=mid;
            else // in else part we check in left half and move start pointer to mid+1 
                start=mid+1;
        }
        
        return -1;
    }
        
    
