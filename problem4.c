#include<stdio.h>
int main(){
	int a=110;
	{
		int a=30;
		
		printf("inner block %d",a);
		a=70;
	}
printf("\nouter block %d",a);	
a=200;
}
