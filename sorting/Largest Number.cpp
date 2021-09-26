//link for the question⬇⬇
//https://leetcode.com/problems/largest-number/

static bool comparetor(string &a, string &b) //to sort vector in reverse order
    {
        return a + b > b + a;
    }
    //idea is to first make one vector of string
    //add all element of nums vector in vector of string 
    //sort string vector in desceding order for that use comparetor 
    //Now add all element of string vector into one string
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int i=0;i<nums.size();i++){
            v.push_back(to_string(nums[i]));
        }
        sort(v.begin(),v.end(),comparetor);
        string res="";
        for(int i=0;i<v.size();i++){
            res+=v[i];
        }
        
        if (res[0]=='0') //for corner case when all elements are zero
            return "0";
        return res;
    }
