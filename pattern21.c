#include<stdio.h>
int main(){
	int i,r,j,c,k;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	for(i=r;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("*");
		}
		printf("\n");
	}
}
