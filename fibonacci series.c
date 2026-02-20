#include<stdio.h>
int fib(int n){
	int n1=0,n2=1,n3,i;
	printf("%d\t%d\t",n1,n2);
	for(i=3;i<=n;i++){
		n3=n1+n2;
		n1=n2;
		n2=n3;
		printf("%d\t",n3);
	}
}
int main(){
	int n;
	printf("enter no of terms upto which you want to write : ");
	scanf("%d",&n);
	
	fib(n);
}
