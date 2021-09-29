//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/median-in-a-row-wise-sorted-matrix1527/1#

//Naive method: first put all element of matrix int array or vector 
    //after that sort that array or vector and return middle element of array or vector.
    //This method will take O(N*M) + O((N*M)log(N*M)) Time complexity + O(N*M) space complexity
    
//Efficient method is to use Binary Search 
    //Idea: step 1: use Binary Search find mid 
    //      step 2: in every row find no of element which are lesser and = to mid 
    //      step 3: if no of element is <=(N*M/2) make low = mid +1 else high =mid-1
    //      step 4: for finding <= mid element use upper-bound function or Binary search
    //      step 5: loop will terminate when low>high 
    //      step 6: return low;
    int countLesserThanEqualToMid(vector<int> &Row,int mid){
        int low=0;
        int high=Row.size()-1;
        while(low<=high){
            int m = (low+high)/2;
            if(Row[m]<=mid)
                low=m+1;
            else
                high=m-1;
        }
        
        return low;
    }
    int median(vector<vector<int>> &matrix, int r, int c){
        int low=1;
        int high=2000; //from given constraints maximum number will be 2000
        while(low<=high){
            int mid =(low+high)/2;
            int cnt=0; //cnt= no of element which are <= mid
            for(int i=0;i<r;i++){
                cnt+=countLesserThanEqualToMid(matrix[i],mid);
            }
            if(cnt<=(r*c)/2)
                low=mid+1;
            else
                high=mid-1;
        }
        
        return low;
    }
