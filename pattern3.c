#include<stdio.h>
int main(){
	int i,j,n=1;
	int r,c;
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	for(i=r;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
