#include<stdio.h>
int fact(int n){
	int i,prod=1;
	for(i=n;i>=1;i--){
		if(i==0) return prod;
		prod*=i;
	}
	return prod;
}
int main(){
	int n,r,k;
	printf("enter n : ");
	scanf("%d",&n);
	int i,j;
	
	for(i=0;i<=n;i++){
	for(k=1;k<=n-i;k++) printf(" ");
		for(j=0;j<=i;j++){
			printf("%d ",fact(i)/(fact(j)*fact(i-j)));
		}
		printf("\n");
	}
}
