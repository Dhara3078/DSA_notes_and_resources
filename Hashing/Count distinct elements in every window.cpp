//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/count-distinct-elements-in-every-window/1/?category[]=sliding-window&category[]=sliding-window&page=1&sortBy=submissions&query=category[]sliding-windowpage1sortBysubmissionscategory[]sliding-window


vector <int> countDistinct (int A[], int n, int k)
    {
        //code here.
        unordered_map<int,int>m;
        vector<int> res;
        int i=0,j=0;
        while(j<n){
            m[A[j]]++;
            
            if(j-i+1==k){
                res.push_back(m.size());
                if(m.find(A[i])!=m.end()){
                    m[A[i]]--;
                    if(m[A[i]]==0)
                    m.erase(A[i]);
                }
                i++;
            }
            
            j++;
        }
        
        return res;
    }
