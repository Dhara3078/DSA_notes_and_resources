//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/longest-equal-prefix3139/1/?category[]=prefix-sum&category[]=prefix-sum&difficulty[]=-1&page=1&sortBy=submissions&query=category[]prefix-sumdifficulty[]-1page1sortBysubmissionscategory[]prefix-sum
int findIndex(int arr[], int X, int Y, int N)
{
    //idea is to run a loop and count no.of x and y and check if both are equal than update res to index i
    int cOfx=0,cOfy=0;//cOfx : count of x //cOfy : count of y
    int res=-1;
    
    for(int i=0;i<N;i++){
        if(arr[i]==X)
          cOfx++;
        if(arr[i]==Y)
          cOfy++;
          
        if(cOfx==cOfy && cOfx>0 && cOfy>0)
          res=max(res,i);
    }
    
    return res;
}
