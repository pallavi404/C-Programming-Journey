//20
#include<stdio.h>
int main(){
	int i,j;
	int r,c,k;
		int n=1;
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	for(i=r;i>=1;i--){
	
		for(k=r-i+1;k<=i;k++){
			printf("%d",k);
			
		}
		
		printf("\n");
	}
}
