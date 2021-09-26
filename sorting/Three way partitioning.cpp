//Link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/three-way-partitioning/1


//Function to partition the array around the range such 
    //that array is divided into three parts.
    void threeWayPartition(vector<int>& array,int a, int b)
    {
        //using Dutch National flag algorithm idea
        int i=0,j=array.size()-1,mid=0;
        while(mid<=j){
           if(array[mid]<a){
               swap(array[mid++],array[i++]);
             }  
           else if(array[mid]>b){
               swap(array[mid],array[j--]);
           }
           else {
               mid++;
           }
        }
    }
