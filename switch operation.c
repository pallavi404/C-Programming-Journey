#include<stdio.h>
int main(){
	int choice,n1,n2;
	printf("1.Addition\n2.Subtraction\n3.Multiplication\n4.Division\n5.remainder");
	printf("\nenter choice : ");
	scanf("%d",&choice);
	printf("enter n1 and n2 : \n");
	scanf("%d%d",&n1,&n2);
	switch(choice){
		case 1 : printf("n1+n2=%d ",n1+n2);
		break;
		
		case 2 : printf("n1-n2=%d ",n1-n2);
		break;
		
		case 3 : printf("n1*n2=%d ",n1*n2);
		break;
		
		case 4 : printf("n1/n2=%d ",n1/n2);
		break;
		
		case 5 : printf("n1%%n2=%d ",n1%n2);
		break;
		
		default : printf("\nyour choice is invalid");
	}
}
