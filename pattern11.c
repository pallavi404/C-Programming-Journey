#include<stdio.h>
int main(){

int r ,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int i,j;
	int midr = (r+1)/2;
	int midc = (c+1)/2;
	for(i=1;i<=r;i++){
		for(j=0;j<=r;j++){
			if(i==midr || j == midc){
				printf("*");
			}
			else printf(" ");
		}
		printf("\n");
	}
}
