#include<stdio.h>
int main(){
	int amount;
	printf("total amount : ");
	scanf("%d",&amount);
	//500 notes;
	printf(" possible no. of 500 notes is : %d\n",amount/500);
	printf(" possible no. of 200 notes is : %d\n",amount/200);
	printf(" possible no. of 100 notes is : %d\n",amount/100);
	printf(" possible no. of 50 notes is : %d\n",amount/50);
	printf(" possible no. of 20 notes is : %d\n",amount/20);
	printf(" possible no. of 10 notes is : %d\n",amount/10);
}
