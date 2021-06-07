// Link for question
//https://practice.geeksforgeeks.org/problems/bit-difference-1587115620/1

int countBitsFlip(int a, int b){
        int count=0;
        int N=a^b;  // using Xor operater to find different bits that need to be flip to convert A to B.
        while(N>0){
            N=N&(N-1); // for counting 1's in N
            count++;
        }
        return count;
        
        
    }
