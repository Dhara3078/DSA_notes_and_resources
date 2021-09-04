//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/smallest-distant-window3132/1

string findSubString(string str)
    {
         
        unordered_map<char,int> m;
        for(int i=0;i<str.size();i++){
            m[str[i]]++;
        }
        int count=m.size();
        m.clear();
        int start=0,mi=INT_MAX;
        int i=0,j=0;
        while(j<str.size()){
            
             m[str[j]]++;
             if(m[str[j]]==1)
             count--;
            
            
            if(count==0){
                while(count==0){
                if(mi>j-i+1){
                    mi=min(mi,j-i+1);
                    start=i;
                }
                if(m.find(str[i])!=m.end())
                    m[str[i]]--;
                    if(m[str[i]]==0)
                    count++;
                 
                i++;
                }
              }
            
            j++;
        }
        
        return str.substr(start,mi);
    }
