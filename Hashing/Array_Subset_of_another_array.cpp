//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/array-subset-of-another-array2317/1

string isSubset(int a1[], int a2[], int n, int m) {
    //hashing method
    unordered_set<int> s;
    int count=0;
    //adding all element of a1 in unordered set
    for(int i=0;i<n;i++){
        s.insert(a1[i]);
    }
    
    for(int i=0;i<m;i++){
        if(s.count(a2[i])) // checking if a2 element is present in set or not
        count++;           // if yes than increment count variable with 1
    }
    
    if(count==m)    // if count equal to size of a2 than a2 is subset of a1
    return "Yes";
    
    else            
    return "No";
    
}
