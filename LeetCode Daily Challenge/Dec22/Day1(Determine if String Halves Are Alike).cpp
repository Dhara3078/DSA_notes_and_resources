//Link for the question⬇⬇
//https://leetcode.com/problems/determine-if-string-halves-are-alike/

//Easy Question😉
//Time Complexity: O(N)
//Space Complexity: O(1)

//code 

class Solution {
public:
    bool halvesAreAlike(string s) {
        int cnt1 = 0;
        int cnt2 = 0;
        int n = s.size();
        for(int i=0; i<n; i++){
            if(i<n/2){
                if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]== 'E' || s[i]=='I' || s[i]=='O' ||  s[i]=='U')
                    cnt1++;
            }else{
                if(s[i]=='a' || s[i]=='e'|| s[i]=='i'|| s[i]=='o' || s[i]=='u' || s[i]=='A' || s[i]== 'E' || s[i]=='I' || s[i]=='O' ||  s[i]=='U')
                    cnt2++;
            }
        }
        
        return cnt1==cnt2;
    }
};
