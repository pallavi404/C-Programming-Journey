#include<stdio.h>
int main(){
	float height;
	printf("enter height in inch: \n");
	scanf("%f",&height);
	float conversion = height *12 ;
	printf("%f feet",conversion);
}
