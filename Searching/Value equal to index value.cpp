//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/value-equal-to-index-value1330/1

vector<int> valueEqualToIndex(int arr[], int n) {
	    // very very simple problem just compare array at index i to i+1 if they are same push it as answer to the vector
	   vector<int> res;
	   for(int i=0;i<n;i++){
	       if(arr[i]==i+1)
	       res.push_back(arr[i]);
	   }
	   return res;
	}
