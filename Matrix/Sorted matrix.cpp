//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/sorted-matrix2333/1

vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        // code here
        int arr[N*N];
        int k=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                arr[k]=Mat[i][j];
                k++;
            }
        }
        sort(arr,arr+N*N);
        
        k=0;
        for(int i=0;i<N;i++){
            for(int j=0;j<N;j++){
                Mat[i][j]=arr[k];
                k++;
            }
        }
        
        return Mat;
    }
