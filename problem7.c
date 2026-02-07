#include<stdio.h>

	int a=60;
int main(){
	int a=110;
	{
		extern int a;
		
		printf("%d",a);
	}
	printf("\n%d",a);
}
