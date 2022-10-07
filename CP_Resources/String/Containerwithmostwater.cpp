#include<bits/stdc++.h>
using namespace std;
long long maxArea(long long a[], int n){
       int p,q;
        long long area=0;
         p=0;
            q=n-1;
        while(p<=q){
           
            area=max(area,min(a[p],a[q])*(q-p));
                if(a[p]<=a[q])
                    p++;
                else
                    q--;
        }
        return area;
    }
    
  
    int main(){
    	int n;
    	cout<<"Enter the size of array: ";
    	cin>>n;
    	cout<<"Enter the elements of the array ";
    	int x;
    	long long a[n];
    	for(int i=0;i<n;i++){
    		cin>>a[i];
		}
		long long  ans=maxArea(a,n);
		cout<<"The max area is "<<ans;
	}