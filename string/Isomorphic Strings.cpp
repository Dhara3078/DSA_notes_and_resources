//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/isomorphic-strings-1587115620/1#

//Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int l1=str1.size(),l2=str2.size();
        int m1[256]={0},m2[256]={0};//two arrays for counting frequency of charecter in each string
        if(l1!=l2)
            return false;
            
        for(int i=0;i<l1;i++){
            // if(!m1[str1[i]] && !m2[str2[i]]){
            //     m1[str1[i]]=str2[i];
            //     m2[str2[i]]=str1[i];
            // }
            m1[str1[i]]++; //count freq of char at its ascii value index
            m2[str2[i]]++;
            if(m1[str1[i]]!=m2[str2[i]])// if freq is different return false
                return false;
        }
        
        return true;
    }
