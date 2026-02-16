#include<stdio.h>
int main(){
	int i,r,j,c,k,n;
	printf("enter r and c : ");
	scanf("%d %d",&r,&c);
	for(i=r;i>=1;i--){
		for(j=1;j<=r-i;j++){
			printf(" ");
		}
		for(k=1;k<=2*i-1;k++){
			printf("*");
		}
		if(i==1){
			for(n=2;n<=r;n++){
			
			for(j=1;j<=r-n;j++){
				printf(" ");
			}
			for(k=1;k<=2*n-1;k++){
				printf("*");
			}
			printf("\n");	
		}

	}
}
}
