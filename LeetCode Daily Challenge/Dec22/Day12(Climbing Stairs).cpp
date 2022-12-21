//Link for the question
//https://leetcode.com/problems/climbing-stairs/

//Hint: fibonacci series

int climbStairs(int n) {

        if(n==1 || n==2 || n==3)
            return n;

      int a=0,b=1;
        for(int i=0; i<n; i++){
            int temp = a;
            a=b;
            b=temp+b;
        }

        return b;
    }
