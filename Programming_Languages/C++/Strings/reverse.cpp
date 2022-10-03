#include<bits/stdc++.h>
using namespace std;

int main(){
	char A[]= "Welcome";
	int i,j;
	
	for(j=0; A[j]!='\0';j++){}
	j=j-1;
	for(i=0;i<j;i++, j--){ 
		swap(A[i],A[j]);
	}
	for(int i=0;A[i]!='\0';i++){
	    cout<<A[i];	
	}
    return 0;    
}
