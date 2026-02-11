#include<stdio.h>
int main(){
	int i,j,r,c,k;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	for(i=r;i>=1;i--){
		for(j=1;j<=i;j++){
			printf(" ");
		}
		for(k=1;k<=r;k++){
			printf("*");
		}
		printf("\n");
	}
}
