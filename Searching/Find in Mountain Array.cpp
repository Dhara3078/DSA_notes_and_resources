//link for the question⬇⬇
//https://leetcode.com/problems/find-in-mountain-array/

 class MountainArray {
 *   public:
 *     int get(int index);
 *     int length();
 * };
 */

class Solution {
public:
     int findPeakElement(MountainArray &mountainArr) {
        int start=0;
        int end=mountainArr.length()-1;

        while(start<end){
            int mid=start+(end-start)/2;
            
            if(mountainArr.get(mid)>mountainArr.get(mid+1))
                //that mean we are in decending order part of arry
                //this might be answer so we move end pointer to mid not mid-1 and check in left half
                end=mid;
            else//else we are in ascending order part of array and for checking in right half
                //move start pointer to mid+1 because we know that arr[mid+1]>arr[mid] 
                start=mid+1;
        }
        
        return end;//we can return any one of start or end because both will be pointing to peak element
    }
    int bSearch(int start,int end, MountainArray &mountainArr,int target){
        bool isAsc;//for checking sorting order of array
        if(mountainArr.get(start)<=mountainArr.get(end))
            isAsc=true;
        else
            isAsc=false;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(isAsc){
                if(mountainArr.get(mid)==target)
                    return mid;
                else if(mountainArr.get(mid)<target)
                    start=mid+1;
                else
                    end=mid-1;
            }
            else{
                if(mountainArr.get(mid)==target)
                    return mid;
                else if(mountainArr.get(mid)>target)
                    start=mid+1;
                else
                    end=mid-1;
            }
        }
        
        return -1;
    }
    int findInMountainArray(int target, MountainArray &mountainArr) {
        //idea is first find peak element 
        //After finfind peak element we can make 2 park of given array to the peak 
        //now left half is sorted in increacing order and right half is sorted in decreacing order
        //now from simple binary dearch we can fing target element
        int peak=findPeakElement(mountainArr);
        int ans;
        if(mountainArr.get(peak)==target)//if peak element is = target element
            return peak;
        ans=bSearch(0,peak,mountainArr,target);//for left half od array
        
        if(ans==-1)//if we can't find target in left half then search for right half
            ans= bSearch(peak+1,mountainArr.length()-1,mountainArr,target);
        
        return ans;
        
    }
};
