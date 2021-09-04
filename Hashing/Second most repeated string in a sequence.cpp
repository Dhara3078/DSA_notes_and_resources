//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/second-most-repeated-string-in-a-sequence0534/1
string secFrequent (string arr[], int n)
    {
        //code here.
        unordered_map<string,int>fre_str;
        for(int i=0;i<n;i++)
          fre_str[arr[i]]++;
        int secMax=0,firMax=0;
        for(auto x : fre_str){
            if(x.second>firMax){
                firMax=max(firMax,x.second);
                if(x.second>secMax && x.second<firMax)
                 secMax=max(secMax,x.second);
            }
        } 
        
        for(auto x : fre_str){
            if(x.second==secMax)
            return x.first;
        }
        
        return 0;
    }
