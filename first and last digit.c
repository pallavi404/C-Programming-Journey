#include<stdio.h>
int main(){
	int n;
	int r,first,last;
	printf("enter n : ");
	scanf("%d",&n);
	int temp =n;
	do{
		r=n%10;
		first = r;
		if(n == temp) {
			last=r;
		}
		n=n/10;
	}
	while(n>0);
	printf("first : %d\n",first);
	printf("last : %d",last);
}
