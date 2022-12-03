//Link for the question⬇⬇
//https://leetcode.com/problems/sort-characters-by-frequency/

//Medium level question
// Time Complexity: 0(NlogN)
// Space Complexity: O(N)
  
  
//code:
class Solution {
public:
    string frequencySort(string s) {
        unordered_map<char, int> mp; //for frequency count
        int n = s.size();
        for(int i=0; i<n; i++){
            mp[s[i]]++;
        }
        
        vector<pair<int,char>> vec; //to make frequency value as key and character as value (so that we can easly sort them by frequency count)
        for(auto x : mp){
            vec.push_back({x.second, x.first});
        }
        
        sort(vec.rbegin(), vec.rend()); //sort vector by decreasing count of frequency 
        
        string res = ""; //result string 
        
        for(auto it : vec){
            for(int i=0; i<it.first; i++){ //adding character into res string according to thier frequency 
                res+=it.second; 
            }
        }
        
        return res;
    }
};
