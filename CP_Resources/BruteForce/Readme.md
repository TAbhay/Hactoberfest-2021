# Brute Force Approach
It can also be called as exhaustive search. Basically brute force means you go through all the possible solutions.

It is one of the easiest way to solve a problem. But in terms of time and space complexity will take a hit.

One example of code for such a problem is given below in the sub string problem:

Problem :
You are given a string “s” and s pattern “p”, you need to check if the pattern is there in the string.

S = “prodevelopertutorial”

P = “rial”

 C++ Code:
***
\#include<bits\stdc++.h> 

using namespace std;

bool search(string str, string pattern)
{   
	int n = str.length();  
	int m = pattern.length();   
 
	for (int i = 0; i <= n - m; i++)   
	{         
		int j;      
		for (j = 0; j < m; j++)
		{        
			if (str[i+j] != pattern[j])            
				break; 
		}  
		if (j == m) 
			return true;   
	}   
		return false;
}

int main()
{
	string str = "prodevelopertutrial";
	string pattern = "rial";

	if(search(str, pattern))
	{
		cout<<"The substring is present"<<endl;
	}
	else
	{
		cout<<"The substring is NOT present"<<endl;		
	}

	return 0;
}