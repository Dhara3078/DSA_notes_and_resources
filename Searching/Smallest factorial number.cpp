//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/smallest-factorial-number5929/1#

// Return true if number's factorial contains at least n trailing zero else false.
    bool ispossible(int p, int n)
    {
        int temp = p, count = 0, f = 5;
        while (f <= temp)
        {
            count += temp/f;
            f = f*5;
        }
        return (count >= n);
    }
     
    
    int findNum(int n)
    {
        // If n equal to 1, return 5.
        // since 5! = 120
        if (n==1)
            return 5;
     
        // Initialising low and high for binary
        // search
        int start = 0;
        int end = 5*n;
     
        while (start<end)
        {
            int mid = start+(end-start)/2;
     
            // Checking if mid's factorial contains
            // n trailing zeroes.
            if (ispossible(mid, n))
                end = mid;
            else
                start = mid+1;
        }
     
        return start;
    }
