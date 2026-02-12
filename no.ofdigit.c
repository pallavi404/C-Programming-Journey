#include<stdio.h>
int main(){
	int n,c=0,r;
	printf("enter n : ");
	scanf("%d",&n);
	while(n>0){
		r = n%10;
		c++;
		n = n/10;
	}
	printf("no of digit %d",c);
}
