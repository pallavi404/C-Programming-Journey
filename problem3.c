#include<stdio.h>
int main(){
	int a=110;
	{
		int a=50;
		a=70;
		printf("inner block %d ",a);
	}
	a=200;
	
}

