#include<stdio.h>
int main(){
	int i,r,j,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=c;j++){
			if(j==1||j==c||i==1||i==r){
				printf("*");
			}
			else{
				printf(" ");
			}
			
		}
		printf("\n");
	}
}
