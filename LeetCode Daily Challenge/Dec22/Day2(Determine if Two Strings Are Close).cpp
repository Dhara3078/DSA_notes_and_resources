//Link for the question⬇⬇
//https://leetcode.com/problems/determine-if-two-strings-are-close/

//Medium level quetions

// Solution according to hints given by LeetCode: 🚀
// Hint 1: ✨
// Operation 1 allows you to freely reorder the string. (means if frequency of each charactor is same in both strings then we can reorder the string1 so that it converts to string2)

// example1:
//     word1 = xyxz (x=2, y=1, z=1)
//     word2 = xxzy (x=2, y=1, z=1)

// 	-> As we can see in above example frequency of each character is same (both strings conatains 2 x's, 1 y's and 1 z's) 
// 	-> by reordering of characters we can convert string1 into string2

//    Answer = TRUE
// Hint 2: ✨
// Operation 2 allows you to freely reassign the letters' frequencies.(if the frequency array is same for both strings then by reassigning the frequency we can convert string1 into string2. but both strings should contain same letters)

// example1:(same frequency array)
// 	word1 = aacabb (a=3, c=1, b=2)
// 	word2 = bbcbaa (a=2, c=1, b=3)
	
// 	-> In above example frequency array is same (1,2,3) and unique charecters are also same (both strings contains a, b and c)
// 	-> In word1 if we reassign freq of a=2 and b=3, word1 will be bbcbaa which equals to word2
// 	-> So by operation 2 we can convert string1 into string2 
	
// 	Answer = TRUE
// example2: (same freq array but not same unique characters)
//     word1 = uau (u=2, a=1)
//     word2 = ssx (s=2, x=1)
	
//     -> As we can see in above example freq array is same (1,2) but unique characters in both strings are not same (word1 contains u & a, word2 contains s & x)
//     -> for this example we can't convert string1 to string2 by reassigning the freq.
	
//     Answer = FALSE

// Time Complexity: O(N)
// Space Complexity: O(N)
    
// Code: 🤩
bool closeStrings(string word1, string word2) {
    int n = word1.size();
    int m = word2.size();
    
    //edge case if size is not same
    if(n != m){
        return false;
    } 
    
    
    unordered_map<char, int> mp1;
    unordered_map<char, int> mp2;
    for(int i=0; i<n; i++){
        mp1[word1[i]]++; 
        mp2[word2[i]]++;
    }
    

    //checking if we can convert string1 to string2 by operation1 (for details see above explanation about Hint1)
     if (mp1.size() == mp2.size() && std::equal(mp1.begin(), mp1.end(), mp2.begin())){
        return true;
    }
    
    
    //checking if we can convert string1 to string2 by operation2 (for details see above explanation about Hint2)
    
    //before checking for operation2 check if unique characters are same in both strings (Why? see the example2 of Hint2)
    for(int i=0; i<n; i++){
        if(mp1[word2[i]] == 0)
            return false;
        if(mp2[word1[i]] == 0)
            return false;
    }
    
    //checking frequency array of both strings with same unique characters 
    unordered_map<int,int> freq1;
    for(auto x : mp1){
        freq1[x.second]++;
    }
    
    for(auto y : mp2){
        if(freq1.find(y.second) == freq1.end()){
            return false;
        }else{
            freq1[y.second]--;
            if(freq1[y.second] <= 0)
                freq1.erase(y.second);
        }
    }
    
    
    
    return true;
    
    
}

