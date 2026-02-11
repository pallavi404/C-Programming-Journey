#include<stdio.h>
int main(){
	int i,j,r,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int k;
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
