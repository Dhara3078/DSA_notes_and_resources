//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1#

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str) {
    // code here
    unordered_map<char,int> m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    int res=0,num;
    
    for(int i=0;i<str.size();){
        if(i==str.size()-1 || m[str[i]]>=m[str[i+1]]){
         num=m[str[i]];
         i++;
        }
        else {
            num=m[str[i+1]] - m[str[i]];
            i+=2;
        }
        
        res+=num;
    }
    
    return res;
}
