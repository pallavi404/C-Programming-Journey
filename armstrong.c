#include<stdio.h>
int main(){
	int temp,r,s=0;

	printf("enter temp : ");
	scanf("%d",&temp);
		int n=temp;
	while(n>0){
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if(temp==s){
		printf("armstron");
	}
	else{
		printf("no armtroong digit");
	}
}
/* 
n=153
r=3
s=27
n=15
r=5
s=125+27
n=1;
r=1;
s=153
n=0
*/
