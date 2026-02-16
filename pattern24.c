#include<stdio.h>
int main(){
	int i,r,j,c,k,n;
	printf("enter r and c : ");
	scanf("%d %d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=1;k<=r;k++){
			printf("*");
		}
		printf("\n");
	}
}
