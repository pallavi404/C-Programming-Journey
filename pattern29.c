#include<stdio.h>
int main(){
	int i,r,j,c,k,n;
	printf("enter r and c : ");
	scanf("%d %d",&r,&c);
	for(i=1;i<=2*r-1;i++){
		int star;
		if(i<=r) star = i;
		else star =2*r-i;
		for(j=1;j<=r-star;j++){
			printf(" ");
		}
		for(k=1;k<=2*star-1;k++){
			if(k==1||k==2*star-1) printf("*");
			else printf(" ");
		}
		printf("\n");
	}
}
