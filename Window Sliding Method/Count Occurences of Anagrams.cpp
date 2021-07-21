//link for question⬇⬇
//https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1/?category[]=sliding-window&category[]=sliding-window&difficulty[]=0&page=1&sortBy=submissions&query=category[]sliding-windowdifficulty[]0page1sortBysubmissionscategory[]sliding-window

int search(string pat, string txt) {
	    // using window sliding
	    unordered_map<char,int> mp;
	    for(int i=0;i<pat.size();i++) // hash mape having pattern char as key and its frequency
	      mp[pat[i]]++;               // as value
	      
	    int i=0,j=0,k=pat.length();   // k as window size(pattern length)
	    int count=mp.size(),Occ=0;
	    while(j<txt.length()){
	        if(mp.find(txt[j])!=mp.end()){ // if we find char of text in mp decrement its value in mp
	            mp[txt[j]]--;
	           if(mp[txt[j]]==0)  //if that char's value becomes 0 in mp we decrement count
	            count--;
	        }
	        
	        
	        
	        if ((j-i+1)==k){ //when we hit window size , check if count becomes 0 that means all char of pat are present in that window
	            if(count==0){//so we increment Occ
	                Occ++;
	            }
	            if(mp.find(txt[i])!=mp.end()){// now for sliding the window we check if txt[i] is present in mp then
	                mp[txt[i]]++;  //we increment its freq 
	                if(mp[txt[i]]==1)//and if freq of that key becomes 1 increment count
	                count++;
	            }
	            
	            i++;
	         }
	         j++;
	    }
	    
	    return Occ;
	}
