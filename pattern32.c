#include<stdio.h>
int main(){
	int i,r,j,c;
	printf("enter r and c : ");
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
