#include<iostream>
using namespace std;

void merge(int a[],int low,int mid,int high){
int i,j,k;
int n1=mid-low+1;
int n2=high-mid;
int left[n1],right[n2];
cout<<low<<" "<<mid<<" "<<high<<"\n";
for(i=0;i<n1;i++){
	left[i]=a[low+i];
	cout<<left[i]<<" ";
}
cout<<"\n";
for(j=0;j<n2;j++){
	right[j]=a[mid+1+j];
	cout<<right[j]<<" ";
}
cout<<"\n";

i=0;j=0;k=low;
while(i<n1 && j<n2){
	if(left[i]<=right[j]){
		a[k]=left[i];
		i++;
	}
	else{
		a[k]=right[j];
		j++;
	}
k++;	
}
while(i<n1){
	a[k]=left[i];
	i++;k++;
} 
while(j<n2){
	a[k]=right[j];
	j++;k++;
} 
}


void mergesort(int a[],int low,int high){
	if(low<high){
		int mid;
		mid=(low+high)/2;
		
		mergesort(a,low,mid);
		mergesort(a,mid+1,high);
		merge(a,low,mid,high);
	}
}



int main(){
	int n;
	int i;
	cout<<"enter number of elements in array:"<<endl;
	cin>>n;
	int a[n];
	for(i=0;i<n;i++){
		cin>>a[i];
		
	}
	mergesort(a,0,n-1);
	cout<<"sorted array:"<<endl;
	for(int i=0;i<n;i++){
		cout<<a[i]<<" ";   
	}
	return 0;
}