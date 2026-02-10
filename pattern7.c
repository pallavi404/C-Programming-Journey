#include<stdio.h>
int main(){
	int r,c;
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	int n=1;
	int i,j;
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++)
		printf("%d",n);
		
		n=n+2;
	}
	printf("\n");
	}
}
