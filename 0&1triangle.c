#include<stdio.h>
int main(){
	int r ,c;
	printf("enter r and c : ");
	scanf("%d%d",&r,&c);
	int i,j;
	for(i=1;i<=r;i++){
		int n;
		if(i%2==0){
			n=0;
		}
		else n=1;
		for(j=1;j<=i;j++){
			printf("%d",n);
			n=1-n;
		}
	}
}
