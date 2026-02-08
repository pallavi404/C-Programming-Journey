#include<stdio.h>
int main(){
	int days;
	printf("enter days : \n");
	scanf("%d",&days);
	float year,month,week;
	year = days/365.0;
	month = days/30.0;
	week =  days/7.0;
	printf("week = %.2f\nyear = %.2f\nmonth = %.2f",week,year,month);
}
