#include<stdio.h>
int main(){
	int i,n;
	printf("enter n : ");
	scanf("%d",&n);
	int fact=1;
	for(i=n;i>=1;i--){
		fact *= i;
	}
	printf("%d",fact);
}
