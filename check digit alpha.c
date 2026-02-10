#include<stdio.h>
int main(){
	char c;
	printf("enter c : ");
	scanf("%c",&c);
	if(c>='0' && c<='9'){
		printf("\n digit");
	}
	else if(c>='a' && c<='z') printf("lower case alpha");
	else if(c>='A' && c<='Z') printf("upper case alpha");
	else{
		printf("special char");
	}
}
