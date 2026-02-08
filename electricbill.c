#include<stdio.h>
int main(){
	int unit,cost;
	printf("enter unit : ");
	scanf("%d",&unit);
	printf("\n enter cost per unit : ");
	scanf("%d",&cost);
	int bill;
	bill=cost*unit;
	printf("\ntotal bill is : %d",bill);
}
