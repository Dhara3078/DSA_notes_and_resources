//Link for the question⬇⬇
//https://leetcode.com/problems/group-anagrams/

vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>>m;//making hash map to store all anagrams together as vector of strings
        for(int i=0;i<strs.size();i++){
            string temp=strs[i]; 
            sort(temp.begin(),temp.end());  //sorting temp string to assign it as key if 2 strings are anagrams of each other then when we sort them they became same 
            m[temp].push_back(strs[i]); 
        }
        
        vector<vector<string>> res;
        for(auto it:m){
            res.push_back(it.second);  //push back all values of map at its key value
        }
        
        return res;
    }
