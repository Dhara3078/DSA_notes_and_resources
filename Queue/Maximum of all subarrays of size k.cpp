//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/maximum-of-all-subarrays-of-size-k3101/1/?category[]=sliding-window&category[]=sliding-window&page=1&sortBy=submissions&query=category[]sliding-windowpage1sortBysubmissionscategory[]sliding-window#

//Idea is to use deque data structure and window sliding technique
    //Function to find maximum of each subarray of size k.
    vector <int> max_of_subarrays(int *arr, int n, int k)
    {
        deque<int> dq;
        vector <int> res;
        
        for(int i=0; i<k; i++)
        {
            while(dq.empty() == false && arr[dq.back()] <= arr[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);
        }
        
        for(int i=k; i<n; i++)
        {
            res.push_back(arr[dq.front()]);
            while(dq.empty() == false && dq.front() <= i-k)
            {
                dq.pop_front();
            }
            while(dq.empty() == false && arr[dq.back()] <= arr[i])
            {
                dq.pop_back();
            }
            dq.push_back(i);

        }
        res.push_back(arr[dq.front()]);
        
        
        return res;
        
    }
