#include<stdio.h>
int main(){
	int a=110;
	{
		int b=30;
		a=a+b;
		b=a-25;
		
	}
	printf("outer block %d %d",a,b);
}
// give error kyuki hmne b ko inner block m declare kia 
