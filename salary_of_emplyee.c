#include<stdio.h>
int main(){
	float total_salary=35000,final_salary;
	int working_days,total_working_days=31;
	

	
	printf("enter working days : \n");
	scanf("%d",&working_days);
	float one_day_salary=total_salary/total_working_days;
	final_salary = one_day_salary* working_days;
	printf("%f",final_salary);
}
