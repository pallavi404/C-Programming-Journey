#include<stdio.h>
int fact(int n){
	int prod=1,i;
	for(i=1;i<=n;i++){
		prod*=i;
	}
	return prod;
}
int main(){
	int i,r,c,j,k;
	printf("enter r : ");
	scanf("%d",&r);
	for(i=0;i<r;i++){
		for(j=0;j<r-i;j++){
			printf(" ");
		}
		
		for(k=0;k<=i;k++){
			printf("%d ",fact(i)/(fact(k)*fact(i-k)));
		}
		printf("\n");
	}
	
}
