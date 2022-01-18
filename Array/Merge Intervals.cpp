//link for the question⬇⬇
//Time complexity : O(nlogn + n);
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        if(intervals.size()==0)
            return res;
        sort(intervals.begin(),intervals.end());
        vector<int> temp(2);
        temp[0]=intervals[0][0];
        temp[1]=intervals[0][1];
        for(int i=1;i<intervals.size();i++){
            if(temp[1]>=intervals[i][0]){
                temp[1]=max(temp[1],intervals[i][1]);
            }else{
                res.push_back(temp);
                temp[0]=intervals[i][0];
                temp[1]=intervals[i][1];
            }
        }
        res.push_back(temp);
        return res;
    }
