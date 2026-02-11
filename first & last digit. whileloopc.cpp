#include<stdio.h>
int main(){
	int n,temp,r,last,first;
	printf("enter n : ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		r=n%10;
		if(n==temp){
		 last =r;
		}
	n=n/10;
	}
	printf("%d %d",r,last);
}
