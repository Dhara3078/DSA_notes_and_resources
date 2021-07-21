//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/factorials-of-large-numbers2508/1

vector<int> factorial(int N){
        // using simple multiplication techniqe which we are using since school days
        vector<int> v;
        v.push_back(1);
        
        for(int i=N; i>1; i--)
        {
            int ans=1;
            int carry=0;
            int len=v.size(),temp;
            for(int j=0; j<len; j++)
            {
                ans=i*v[j];
                ans=ans+carry;
                v[j]=ans%10;
                carry=ans/10;
            }
            while(carry != 0)
            {
                temp=carry%10;
                v.push_back(temp);
                carry=carry/10;
            }
        }
        
        reverse(v.begin(),v.end());
        return v;
    }
