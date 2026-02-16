#include<stdio.h>
int main(){
	int i,r,j,c,k;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(k=1;k<=r-i;k++){
			printf(" ");
		}
		for(j=1;j<=2*r-i;j++){
			printf("*");
		}
		printf("\n");
	}
}
