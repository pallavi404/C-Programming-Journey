#include<stdio.h>
int main(){
	int n,last,first,r;
	printf("enter n : ");
	scanf("%d",&n);
	int temp=n;
	for(;n>0;n/=10){
		r=n%10;
		first = r;
		if(n==temp){
			last = r;
		}
	}
	printf("First digit = %d\n", first);
    printf("Last digit = %d\n", last);
}
