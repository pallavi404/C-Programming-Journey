#include<stdio.h>
int main(){
	int n1=0,n2=1,n3,n,c=2;
	printf("enter no of terms : ");
	scanf("%d",&n);
	printf("%d\t%d\t",n1,n2);
	while(c<n){
		n3=n1+n2;
		printf("%d\t",n3);
		n1=n2;
		n2=n3;
		c++;
	}
}
