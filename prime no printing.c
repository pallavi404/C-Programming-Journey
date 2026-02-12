#include<stdio.h>
int main(){
	int n;
	printf("enter n : ");
	scanf("%d",&n);
	int i,j;
	int prime;
	for(i=2;i<=n;i++){
		prime =0;
		for(j=2;j*j<=i;j++){
			if(i%j==0){
				prime = 1;
				break;
			}
		}
		if(prime == 0){
			printf("%d\t",i);
		}
	}
}
