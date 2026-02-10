#include<stdio.h>
int main(){
	int r,c;
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	int i,j;
	for(i=r;i>=1;i--){
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		printf("\n");
	}
}
