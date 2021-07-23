//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/longest-palindrome-in-a-string3411/1#

string longestPalin (string S) {
        // code here
        
        int low,high;
        int start=0,len=1;// start  represent starting index and len reoresent size of substr
        //for any string there will be 2 posibilites: 1 substr is even palindrome
        //                                            2 substr is odd palindrome
        for(int i=1;i<S.size();i++){
            //for even part we will consider i-1 and i as center points
            low=i-1;
            high=i;
            while(low>=0 && high<S.size() && S[low]==S[high]){
                if(high-low+1>len){
                    start=low;
                    len=high-low+1;
                    
                }
                
                low--;
                high++;
            }
            
            //for odd part we will consider i as center point
            low=i-1;
            high=i+1;
            while(low>=0 && high<S.size() && S[low]==S[high]){
                if(high-low+1>len){
                    start=low;
                    len=high-low+1;
                    
                }
                
                low--;
                high++;
            }
            
        }
       
        return S.substr(start,len);
    }
