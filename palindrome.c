#include<stdio.h>
int main(){
	int n,r,rev=0;
	printf("enter n : ");
	scanf("%d",&n);
	int temp = n;
	while(temp>0){
		r= temp%10;
		rev = rev*10+r;
		temp=temp/10;
	}
	if(n==rev) printf("palindrome");
	else printf("not a palindrome digit");
}
