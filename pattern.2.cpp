#include<stdio.h>
int main(){
	int n,r;
	printf("enter num. of row and column : ");
	scanf("%d%d",&n,&r);
	int i,j;
for(i=1;i<=n;i++){
	for(j=1;j<=r;j++){
		printf("%d ",j);
	}
	printf("\n");
}
}
