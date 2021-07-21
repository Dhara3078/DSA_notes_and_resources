//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/palindrome-string0817/1

int isPlaindrome(string S)
	{
	    // Your code goes here

    int l=0,h=S.size()-1;
    while(l<h){
        if(S[l]!=S[h])
         return 0;
        
        l++;
        h--;
    }
    
    return 1;
	}
