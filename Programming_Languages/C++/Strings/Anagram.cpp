#include<iostream>
using namespace std;

int main()
{
	char A[]="decimal";
	char B[]="oediczx";
	int i,h[26]={0};
	for(i=0;A[i]!='\0';i++)
	{
		h[A[i]-97]+=1;
	}
	for(i=0;B[i]!='\0';i++)
	{
		h[B[i]-97]-= 1;
		if(h[B[i]-97] <0){
			cout<<"not anagram";
			break;
		}
	}
			if(B[i]=='\0'){
			cout<<"anagram";
		}
	
}
