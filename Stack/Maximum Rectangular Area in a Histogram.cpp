//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/maximum-rectangular-area-in-a-histogram-1587115620/1#

long long getMaxArea(long long arr[], int n)
    {
        
        long long int maxArea = 0, curr, temp;
        
        stack<long long> s;
        for(int i=0; i<n; i++)
        {
            while(s.empty() == false && arr[s.top()] >= arr[i])
            {
                int curr = s.top();
                s.pop();
                temp = (s.empty() ? i : (i-s.top()-1))*arr[curr];
                maxArea = max(maxArea, temp);
            }
            s.push(i);
        }
        while(s.empty() == false)
        {
            curr = s.top();
            s.pop();
            temp = arr[curr] * (s.empty() ? n : (n-s.top()-1));
            maxArea = max(maxArea, temp);
        }
        return maxArea;
    }
