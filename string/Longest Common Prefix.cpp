//link for question⬇⬇
//https://leetcode.com/problems/longest-common-prefix/

string longestCommonPrefix(vector<string>& strs) {
        if(strs.size()==0) return "";
        string prefix=strs[0]; //assign first string and comapare it with other remaining strings 
        int len=INT_MAX;      //which will store length comman prefix in all strings
        for(int i=1;i<strs.size();i++){ //starting with 2nd string in vector 
            int cnt=0;  //this cnt variable stores lenth of comman prefix in one string compare to 1st string
            for(int j=0;j<prefix.size();j++){
                if(prefix[j]==strs[i][j]) 
                    cnt++;
                else
                    break;
            }
            
            len=min(len,cnt); //update len to minimum of cnt in each strings   
        }
        
        return prefix.substr(0,len);
    }
