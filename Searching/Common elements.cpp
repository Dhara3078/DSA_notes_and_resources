//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/common-elements1132/1#

 vector <int> commonElements (int A[], int B[], int C[], int n1, int n2, int n3)
        {
            
            int i=0,j=0,k=0;
            vector<int> res;
            while(i<n1 && j<n2 && k<n3){
                //for corner cases when array have duplicates
                if(i>0 && A[i-1]==A[i]){
                    i++;
                    continue;
                }
                if(j>0 && B[j-1]==B[j]){
                    j++;
                    continue;
                }
                if(k>0 && C[k-1]==C[k]){
                    k++;
                    continue;
                }
                //when there is common element in every array
                if(A[i]==B[j] && A[i]==C[k]){
                    res.push_back(A[i]);
                    i++;
                    j++;
                    k++;
                }
                else if(A[i]<B[j] ){
                    i++;
                }
                else if( B[j]<C[k]){
                    j++;
                }
                else {
                    k++;
                }
                
            }
            return res;
        }










