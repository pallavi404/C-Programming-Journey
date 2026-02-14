//21

#include<stdio.h>
int main(){
	int i,j;
	int r,c,k;
	
	printf("enter row and column : ");
	scanf("%d%d",&r,&c);
	for(i=1;i<=r;i++){
	int	n1=1,n0=0;
		if(i%2==0){
			for(j=1;j<=i;j++){
				printf("%d",n0);
			int temp=n1;
			n1=n0;
			n0=temp;
			}
		}
		else{
			for(j=1;j<=i;j++){
				printf("%d",n1);
				int temp=n1;
			n1=n0;
			n0=temp;
			}
		}
		printf("\n");
	}
}
