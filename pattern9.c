#include<stdio.h>
int main(){
	int r ,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int i,j;
	char ch='A';
	for(i=1;i<=r;i++){
		char ch = 'A';
		for(j=0;j<i;j++){
			printf("%c",ch);
			ch++;
		}
		printf("\n");
	}
}
