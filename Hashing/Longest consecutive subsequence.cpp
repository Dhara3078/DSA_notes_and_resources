//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/longest-consecutive-subsequence2449/1

//Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
      unordered_set<int>s;
      
      for(int i=0;i<N;i++){
          s.insert(arr[i]);//adding all element of array in unordered set
      }
      int res=1;
      for(int i=0;i<N;i++){
          int count=1;
          if(s.find(arr[i]-1)!=s.end()){
              continue;
          }
          else {
            while(s.find(arr[i]+count)!=s.end()){
              count++;
             }
            res=max(res,count);
          }
         
      }
      
      
      return res;
    }
