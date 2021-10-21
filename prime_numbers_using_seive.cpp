/*Hello everyone!! I am Pratyush and below is C++ code to find the prime numbers upto an inputed number n using Sieve of Eratosthenes. It is an efficient way to find the prime numbers.

In it we will assign a vector of pairs having first element as integer and second as bool, second bool element will help us to check whether a number is prime or not.

After that except 2 we will remove all even numbers and then multiples of other numbers like 3, 5, 7 etc will be assigned false as they are not prime. This assignation of false to the multiples of a number i will start from i*i because before it, its other multiples will already be falsed by smaller primes*/

#include<bits/stdc++.h>

using namespace std;

void primes( vector<pair<int, bool>> v , long long int n ) 
{
	v.push_back(make_pair(2, true));
	
	for(long long int i=3; i<n ; i+=2){
		v.push_back(make_pair(i, true));    //assigning all odd number(except 1) with 2 to this vector
		}
	for(long long int i=3; i<=floor(sqrt(n)); i+=2){  
		if(v[ceil(i/2)].second==true){
		
			for(long long int j=i*i; j<n; j+=i){   // loop will start from i*i as mentioned in above explanation
				v[ceil(j/2)].second=false;     // assigning multiples of primes as false
				}
			}
		}
	cout<<endl<<"the prime numbers till the number "<< n <<" are :"<<endl;
	for(long long int i=0; i<v.size(); i++){
		if(v[i].second==true){
			cout<<v[i].first<<" ";          //printing the numbers
			}
		}
	cout<<endl;
	}
			

int main()
{
	vector<pair<int, bool>> v;
	long long int n;
    
	cout<<"enter the number upto which you want the prime numbers"<<endl;
	cin>>n;
    
	primes( v, n );
	return 0;
    
}
