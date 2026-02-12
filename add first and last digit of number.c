#include<stdio.h>
int main(){
	int n,r,first,last;
	printf("enter n : ");
	scanf("%d",&n);
	int temp = n;
	while(n>0){
		r = n % 10;
		if(n == temp ){
			last = r;
		}
		first = r;
		n = n/10;
	}
	printf("last digit is %d \n",last);
		printf("first digit is %d \n",first);
		printf("sum of first and last digit is %d",last+first);
}
