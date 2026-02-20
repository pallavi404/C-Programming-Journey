#include<stdio.h>
int fact(int n){
	int i,prod=1;
	for(i=1;i<=n;i++){
		prod = prod*i;
	}
	return prod;
}
int main(){
	int n,i;
	printf("enter n : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("fact of %d is %d\n",i,fact(i));
	}
}
