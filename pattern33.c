#include<stdio.h>
int main(){
	int i,j,k,l,m,r,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(k=1;k<=i;k++){
			printf("%d",k);
		}
		for(j=i-1;j>=1;j--){
			printf("%d",j);
		}
		printf("\n");
	}
}
