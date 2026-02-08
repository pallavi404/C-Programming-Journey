#include<stdio.h>
int main(){
	float distance,petrol_used,petrol_price,mileage;
	printf("enter distance in kilometer: \n");
	scanf("%f",&distance);
	printf("enter petrol used per liter: \n");
	scanf("%f",&petrol_used);	
	printf("enter petrol cost in rupees: \n");
	scanf("%f",&petrol_price);
	float total_cost_of_petrol = petrol_price*petrol_used;
	
	mileage = distance/petrol_used;
	printf("mileage = %f",mileage);
}
