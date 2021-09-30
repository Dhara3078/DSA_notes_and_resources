//link for the question⬇⬇
//https://practice.geeksforgeeks.org/problems/special-stack/1

//idea is to maintain one auxiliary stack for get min function 
stack<int> aux;
void push(stack<int>& s, int a){
	s.push(a);
	
	if(aux.empty()==true || aux.top()>=a){
	    aux.push(a);
	}
	
}

bool isFull(stack<int>& s,int n){
	if(s.size()==n)
	    return true;
	 return false;
}

bool isEmpty(stack<int>& s){
	return s.empty();
}

int pop(stack<int>& s){
    int temp=s.top();
	if(aux.top()==s.top()){
	    aux.pop();
	}
	    s.pop();
	return temp;
}

int getMin(stack<int>& s){
	return aux.top();
}
