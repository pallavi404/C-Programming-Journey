#include<stdio.h>
int main(){
	int i,r,j,c,k,n=1;
	printf("enter r and c : ");
	scanf("%d %d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++){
			printf("%d",n);
			n++;
		}
		printf("\n");
	}
}
