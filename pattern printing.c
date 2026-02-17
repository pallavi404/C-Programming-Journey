#include<stdio.h>
int main(){
	int i,j,r,c;
	printf("enter r and c: ");
	scanf("%d%d",&r,&c);
		int n=1;
	for(i=1;i<=r;i++){
	
		for(j=1;j<=i;j++){
			if((i+j)%2==0){
				printf("1");
			}
			else printf("0");
		}
		printf("\n");
	}
}
