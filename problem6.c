#include<stdio.h>
int main(){
	int a=60;
	{
		int a=110;
		a=a-a;
		a=200;
		printf("%d",a);
	}
}
