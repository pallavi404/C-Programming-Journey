#include<stdio.h>
int hcf(int n,int r){

int k,i,p;
if(n<=r){
	k=r;
}
else k =n;
for(i=1;i<=k;i++){
	if(n%i==0 && r%i==0){
		p=i;
	}
}
printf("hcf of %d,%d is %d",n,r,p);
}

int main(){
	int n,r;
	printf("enter n and r : ");
	scanf("%d%d",&n,&r);
	hcf(n,r);
}
