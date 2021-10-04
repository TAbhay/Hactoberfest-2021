#include<stdio.h>
#include<stdlib.h>
int main(){
	int num;
	scanf("%d",&num);
	int zero,first,second;
	for(int i=0;i<=num;i++){
		int temp=i;
		zero=temp%10;
		temp=temp/10;
		if(temp==0){
			printf("%d   ",zero);
		}
		else{
			first=temp%10;
			temp=temp/10;
			if(temp==0){
				if(abs(first-zero)==1){
					printf("%d   ",i);
				}
			}
			else{
				second=temp%10;
				if(abs(first-zero)==1 && abs(second-first)==1){
					printf("%d   ",i);
				}
			}
			
			
		}
						
	}
	return 0;
}
