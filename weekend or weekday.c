#include<stdio.h>
int main(){
	int n;
	printf("enter n : \n");
	scanf("%d",&n);
	switch(n){
		case 1 : printf("weekend");
		break;
		case 2 : printf("weekday");
		break;
		case 3 : printf("weekday");
		break;
		case 4 : printf("weekday");
		break;
		case 5 : printf("weekday");
		break;
		case 6 : printf("weekday");
		break;
		case 7 : printf("weekend");
		break;
		default :  printf("not a valid day");
	}
}
