#include<stdio.h>
int main(){
	int n,i;
	printf("enter n ie. size : ");
	scanf("%d",&n);
	int a[n];
	printf("enter array element : ");
	
	for(i=0;i<n;i++){
	scanf("%d",&a[i]);	
	}
	printf("element are : ");
	for(i=0;i<n;i++){
		printf("%d\t",a[i]);
	}
}
