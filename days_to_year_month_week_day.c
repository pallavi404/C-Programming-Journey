#include<stdio.h>
int main(){
	int days;
	printf("enter days : \n");
	scanf("%d",&days);
	
	
	int year = days/365;
	int remainder= days % 365;
	
	int month = remainder/30;
	int remainingday = remainder%30;
	
	int week = remainingday/7;
	int remain_day = remainingday%7;
	
	printf("%d year %d month %d week %d day",year,month,week,remain_day);
}
