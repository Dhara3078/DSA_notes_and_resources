//link for the question⬇⬇
//https://leetcode.com/problems/find-smallest-letter-greater-than-target/

 char nextGreatestLetter(vector<char>& letters, char target) {
        //binary search problem
        //same approach as ceiling problem(return start instead of -1) just remove equal to target part
        //if we have no character greater than target return first elment of array 
        //because in question it says that the latters wrap around for that we will return start%length of array 
        int start=0,end=letters.size()-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            
            if(letters[mid]>target){
                end=mid-1;
            }
            else {
                start=mid+1;
            }
        }
        
        return letters[start%letters.size()];
    }
