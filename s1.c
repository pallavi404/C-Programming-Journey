#include<stdio.h>
int main(){
	int scanf = 10;
	printf("%d",scanf);
}
// This program runs because a local variable named 'scanf'
// shadows the standard library function scanf() inside main.
// This is allowed but considered bad practice.

