//ex 13
#include<stdio.h>
int main(){
	int i,j,n=1;
	int r,c,k;
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		char ch = 'A';
		for(j=1;j<=i;j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
