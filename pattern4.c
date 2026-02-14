#include<stdio.h>
int main(){
	int i,j,n=1;
	int r,c,k;
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("*");
			
		}
		printf("\n");
	}
}
