#include<stdio.h>
int main(){
	int n,r,p=1;
	printf("enter n : ");
	scanf("%d",&n);
	while(n>0){
		r=n%10;
		p*=r;
		n=n/10;
	}
	printf("product of given number is %d",p);
}
