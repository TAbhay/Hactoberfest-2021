#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	int v=0,j,t=0;
	while(t<5){
	scanf("%[^\n]%*c",str);
	for(char i='a';i<='z';i++){
		v=0;
		for(j=0;j<strlen(str);j++){
			if(str[j]==i){
				v=1;break;
			}			
		}if(v==0){
			printf("No");
			break;
		}
	}
	if(v==1){
		printf("yes");
	}t++;printf("\n");
	}
	
	return 0;
}
