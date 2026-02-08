//TA DA PF
#include<stdio.h>
int main(){
	float HRA,TA,DA,PF,gross_salary;
	float total_salary;
	printf("enter total salary : ");
	scanf("%f",&total_salary);
	HRA = (total_salary* 50)/100;
	TA = (total_salary*40)/100;
	DA = (total_salary*30)/100;
	PF = (total_salary*10)/100;
	printf("HRA = %.2f\nTA = %.2f\nDA = %.2f\nPF = %.2f",HRA,TA,DA,PF);
	printf("\ngross_salary = %f",HRA+TA+DA+PF);
}
