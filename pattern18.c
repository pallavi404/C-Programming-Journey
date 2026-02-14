#include<stdio.h>
int main(){
	int r,i,j;
	printf("enter r : ");
	scanf("%d",&r);	
		int n=1;
	for(i=1;i<=r;i++){
	
		for(j=1;j<=i;j++){
			printf("%d",n);
			n++;
		}
		n=j;
		printf("\n");
	}
}
