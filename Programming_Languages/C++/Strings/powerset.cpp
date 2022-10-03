#include<bits/stdc++.h>
using namespace std;

void powerset(string s, int i, string curr){
	
	if(i==s.length()){
		cout<<curr<<" ";
		return;
	}
	
	powerset(s, i+1, curr+s[i]);
	powerset(s, i+1, curr);					
	return;
}

int main(){
	string s = "123";
	string curr;
    powerset(s, 0, curr);
	
    return 0;    
}
