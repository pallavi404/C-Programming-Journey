//18
#include<stdio.h>
int main(){
	int i,j;
	int r,c,k;
		int n=1;
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=i;j++){
			if(i%2==0){
				printf("%d",n);
				
			}
			else{
				printf("*");
			}
			n++;
		}
		printf("\n")
	}
}
