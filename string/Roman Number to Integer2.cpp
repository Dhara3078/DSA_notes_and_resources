//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/roman-number-to-integer3201/1#

// str given roman number string
// Returns decimal value of roman numaral
int romanToDecimal(string &str) {
    // code here
    long res=0,n=0;
    for(int i=str.size()-1;i>=0;i--){
        if(str[i]=='I'){
          if(n>1)   
           res-=1;
          else
           res+=1;
          n=1;
        }
        else if(str[i]=='V'){
          if(n>2)   
           res-=5;
          else
           res+=5;
          n=2;
        }
           
        else if(str[i]=='X'){
          if(n>3)   
           res-=10;
          else
           res+=10;
          n=3;
        }
           
        else if(str[i]=='L'){
          if(n>4)   
           res-=50;
          else
           res+=50;
          n=4;
        }
           
        else if(str[i]=='C'){
          if(n>5)   
           res-=100;
          else
           res+=100;
          n=5;
        }
           
        else if(str[i]=='D'){
          if(n>6)   
           res-=500;
          else
           res+=500;
          n=6;
        }
           
        else if(str[i]=='M'){
          if(n>7)   
           res-=1000;
          else
           res+=1000;
          n=7;
        }
           
        else{
           return 0;
        }
    }
    
    return res;
}
