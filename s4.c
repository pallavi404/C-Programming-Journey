#include<stdio.h>
int main(){
	int p,q,r,s;
	p=1;
	q=2;
	r=p,q;
	s=(p,q);
	printf("p=%d q=%d",p,q);
}
