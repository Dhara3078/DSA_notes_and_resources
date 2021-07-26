//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/min-number-of-flips3210/1#

int minFlips (string S)
{
    // for alternative 0s and 1s string there is 2 cases
    // case 1: 0101010101 string in this string in even index we have 0s and in odd index 1s
    //case 2:  1010101010 string in this string we have 1s in even idex and 0s in odd index
    //so the idea is we count number of flips requred in both cases and return minimum of them
    int cnt1=0;//count for starting with 1 string case
    int cnt2=0;//count for string with 0 string case
    for(int i=0;i<S.size();i++){
        if(i%2==0 && S[i]=='0') cnt1++; //if index is even and element is 0 inplace of 1  
        if(i&1 && S[i]=='1') cnt1++;  //if index is odd and element is 1 inplace of 0
        if(i%2==0 && S[i]=='1') cnt2++;//if index is even and element is 1 inplace of 0
        if(i&1 && S[i]=='0') cnt2++;//if index is odd and element is 0 inplace of 1
    }
    
    return min(cnt1,cnt2);
}
