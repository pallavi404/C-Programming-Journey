#include<stdio.h>
int main(){

int r ,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int i,j;
	for(i=0;i<=r;i++){
		char ch = 'A';
		if(i%2==0){
			for(j=1;j<=i;j++){
				printf("%c",ch);
				ch++;
			}
		}
		else {
			for(j=1;j<=i;j++){
				printf("%d",j);
			}
		}
		printf("\n");
	}
	
}
