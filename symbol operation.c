#include<stdio.h>
int main(){
	char ch;
	int m,n;
	printf("enter  char, m and n : \n");
	scanf(" %c%d%d",&ch,&m,&n);
	switch(ch){
		case '+' : printf("%d + %d = %d",m,n,m+n);
		break;
		case '-' : printf("%d - %d = %d",m,n,m-n);
		break;
		case '*' : printf("%d * %d = %d",m,n,m*n);
		break;
		case '/' : printf("%d / %d = %d",m,n,m/n);
		break;	
		case '%' : printf("%d % %d = %d",m,n,m%n);
		break;
		default : printf("not valid operation");
		}
}
