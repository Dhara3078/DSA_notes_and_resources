//link for question⬇⬇
//https://leetcode.com/problems/permutation-in-string/

 bool checkInclusion(string s1, string s2) {
        //window sliding 
        unordered_map<char,int> m;
        for(int i=0;i<s1.size();i++){
            m[s1[i]]++;
        }
        int count=m.size();
        int i=0,j=0;
          while(j<s2.size()){
              if(m.find(s2[j])!=m.end()){
                  m[s2[j]]--;
                 if(m[s2[j]]==0)
                      count--;
              }
                 
              if(j-i+1==s1.size()){
                  if(count==0)
                      return true;
                  if(m.find(s2[i])!=m.end()){
                     if(m[s2[i]]==0)
                          count++;
                      m[s2[i]]++;
                      
                  }
                  i++;
              }
              j++;
          }
        return false;
    }
