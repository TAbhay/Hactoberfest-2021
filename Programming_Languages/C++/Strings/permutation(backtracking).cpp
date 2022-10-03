#include<bits/stdc++.h>
using namespace std;

void perm(string s, int l, int h){
	int i;
	
	if(l==h){
		cout<<s<<" ";
		return;
	}
	for(i=l;i<h;i++){
		swap(s[l], s[i]);
		perm(s, l+1, h);
		swap(s[l],s[i]);
	}					
	return;
}

int main(){
	string str = "ABC";
    perm(str, 0, str.length());
	
    return 0;    
}
