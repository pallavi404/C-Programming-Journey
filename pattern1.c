#include<stdio.h>
int main(){
	int n,r;
	printf("enter num. of row and column : ");
	scanf("%d%d",&n,&r);
	int i,j;
	for(i=0;i<n;i++){
		for(j=0;j<r;j++){
			printf("*");
		}
		printf("\n");
	}
}
