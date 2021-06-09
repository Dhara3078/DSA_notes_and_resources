// link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/kth-smallest-element5635/1
// Used Quick Select method

int kthSmallest(int arr[], int l, int r, int k) {
        //code here
        int pivotIndex=partition(arr,l,r);
        if((k-1)<pivotIndex){
           return kthSmallest(arr,l,pivotIndex-1,k);    
        }
        else if((k-1)>pivotIndex){
           return kthSmallest(arr,pivotIndex+1,r,k);
        }
        else{
            return arr[pivotIndex];
        }
       
        
    }
    
    int partition(int arr[],int l,int h){     // lomuto partition 
        int pivot = arr[h];                   // For better time complexity use random function for selection pivot 
        int i=l-1;
        for(int j=l;j<h;j++){
            if(arr[j]<pivot){
                i++;
                swap(arr[i],arr[j]);
            }
        }
        swap(arr[i+1],arr[h]);
        return i+1;
    }
