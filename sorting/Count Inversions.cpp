//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/inversion-of-array-1587115620/1

//idea is to use merge sort and in every merge sort count number of inversions
//count inversions in merge function too

long long int merge(long long int arr[],long long int l,long long int mid,long long int r){
    long long int n1=mid-l+1,n2=r-mid;  //n2=r-(mid+1)+1 = r-mid-1+1 = r-mid
    long long int left[n1],right[n2];
    for(int i=0;i<n1;i++){
        left[i]=arr[l+i];
    }
    for(int i=0;i<n2;i++){
        right[i]=arr[mid+1+i];
    }
    long long int count=0;
    int i=0,j=0,k=l;
    while(i<n1 && j<n2){
        if(left[i]<=right[j])
        {
            arr[k]=left[i];
            i++;
        }
        else{
            arr[k]=right[j];
            count+=n1-i;
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=left[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=right[j];
        j++;
        k++;
    }
    return count;
}

long long int mergesort(long long int arr[],long long int l,long long int r){
   long long int count=0;
    if(l<r){
        long long int mid=l+(r-l)/2;
        count+=mergesort(arr,l,mid);
        count+=mergesort(arr,mid+1,r);
        count+=merge(arr,l,mid,r);
    }
    
    return count;
}


long long int inversionCount(long long arr[], long long N)
{
    
    return mergesort(arr,0,N-1);
}
