#include<stdio.h>
int main(){
	int i,j,r;
	printf("enter r : ");
	scanf("%d",&r);
	for(i=1;i<=2*r-1;i++){
		int star ;
		if(i<=r){
			star = i;
		}
		else {
			star = 2*r-i;
		}
		for(j=1;j<=star;j++){
			printf("*");
		}
		printf("\n");
	}
}
