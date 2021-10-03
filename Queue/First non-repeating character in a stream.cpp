//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/first-non-repeating-character-in-a-stream1216/1#

string FirstNonRepeating(string A){
		    // Code here
		    //Idea is to use queue and undered map 
		    //Step 1: traverse string from left to right
		    //Step 2: add char at index i in to map and count its frequency as value
		    //Step 3: if char's frequency is one in map then add that char into queue
		    //Step 4: run while loop until queue is empty, In this loop check if front element of queue's frequency is one then break the loop.
		    //        else remove that char from queue
		    // Step 5: if queue is empty, put # into res string. 
		    //         else add char at the front of queue
		    
		    unordered_map<char,int> mp;
		    queue<char> q;
		    string res="";
		    for(int i=0;i<A.size();i++){ //step 1
		    
		        mp[A[i]]++; //step 2
		        
		        if(mp[A[i]]==1) //step 3
		            q.push(A[i]);
		            
		        while(q.empty()==false){//step 4
		            if(mp[q.front()]==1)
		                break;
		            else
		               q.pop();
		        }
		        
		        if(q.empty()) //step 5
		            res+='#';
		        else
		            res+=q.front();
		    }
		    
		    return res;
		    
		}
