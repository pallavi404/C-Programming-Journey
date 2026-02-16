#include<stdio.h>
int main(){
	int i,r,j,k;
	printf("enter r : ");
	scanf("%d",&r);
	for(i=1;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			if(k==1 || k ==2*i-1||i==r) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
