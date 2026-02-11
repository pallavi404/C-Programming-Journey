#include<stdio.h>
int main(){

int i,j,r,c,k;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		char ch = 'A';
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}

