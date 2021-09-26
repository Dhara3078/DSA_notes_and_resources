//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/sort-by-set-bit-count1153/1


static bool setbitComp(int x,int y){
        return __builtin_popcount(x)>__builtin_popcount(y);
    }
    void sortBySetBitCount(int arr[], int n)
    {
        // used stl function to sort
        stable_sort(arr,arr+n,setbitComp);
    }
