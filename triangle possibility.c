#include<stdio.h>
int main(){
 int a1,a2,a3;
 printf("\n enter all 3 angle : ");
 scanf("%d%d%d",&a1,&a2,&a3);
 if(a1+a2+a3==180){
 	printf("\n triangle possible");
 }
 else printf("not possible ");
}
