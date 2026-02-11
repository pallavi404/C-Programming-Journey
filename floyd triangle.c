#include<stdio.h>
int main(){

int r ,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int i,j;
	int n=1;
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++){
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}
