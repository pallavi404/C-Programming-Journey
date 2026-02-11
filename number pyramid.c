#include<stdio.h>
int main(){
	int r,c,k,i,j;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("%d",k);
		}
		printf("\n");
	}
}
