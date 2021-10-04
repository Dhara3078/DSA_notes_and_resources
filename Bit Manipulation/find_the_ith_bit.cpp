//idea is to do and operation between 1 at position of i with other remaining value as 0 and given number
//because we know that when we AND any number with 1 ith will give that number only
//for geting 1 at i position we need to left shift it by i-1 (1<<(i-1), it's called mask 
// return (number&mask);


int find_ithBit(int n, int i){
  if(n(1<<(i-1)))
    return 1;
  else
    return 0;
}


//Same question but because in tquestion it mention that from left side index start with 0, we need to change code little 
//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/check-whether-k-th-bit-is-set-or-not-1587115620/1

 // Function to check if Kth bit is set or not.
    bool checkKthBit(int n, int k)
    {
        // Your code here
        // It can be a one liner logic!! Think of it!!
        if(n&(1<<k))
            return true;
        else
            return false;
    }
