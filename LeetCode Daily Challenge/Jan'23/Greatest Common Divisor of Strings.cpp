//Link for the question
//https://leetcode.com/problems/greatest-common-divisor-of-strings/

//easy level

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        int n = str1.size(), m = str2.size();
        if(str1[0]!=str2[0]){
            return "";
        }
        
        if(str1+str2 == str2+str1){
            int gcdLen = gcd(n,m);
            return str1.substr(0,gcdLen);
        }

        return "";
    }
};
