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
