#include<stdio.h>
int Queue[20]={0};
int head=1,tail=0;

void push(int data){
	
	if(!isfull()){
	   Queue[head]=data;
	   head++;
    }
    return;
}

void pop(){
    if(!isempty()){
        head--;	
	}
}

int isfull(){
	
	if(head==20){
		return 1;
	}
	return 0;
}

int isempty(){
	
	if(tail==-1){
		return 1;
	}
	return 0;
}


void bfs(int n,int a[][n]){
	int i,j,k;
	int flag=0;
	for(i=0;i<head;i++){
		for(j=0;j<n;j++){
			if(a[Queue[i]][j]==1){
				for(k=0;k<head;k++){
					if(Queue[k]==j){
					   flag=1;
					   break;
					}
				}
				if(flag==0){
					push(j);
				}
				flag=0;
			}
		}
	}
    
    printf("\nBrithFirstSerch\n");
    for(i=0;i<head;i++){
    	printf("%d, ",Queue[i]);
	}
}

int main(){
    int n,i,j;
    //n=7;
	//int a[][7]={{0,1,0,1,0,0,0},{1,0,1,1,0,1,0},{0,1,0,1,1,1,0},{1,1,1,0,1,0,0},{0,0,1,1,0,0,1},{0,1,1,0,0,0,0},{0,1,0,0,1,0,0}};
 
	printf("Enter the number of virtex: ");
	scanf("%d",&n);
	
	int a[n][n];
	printf("Enter the eges: ");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	bfs(n,a);
	
	
	
	return 0;
}
