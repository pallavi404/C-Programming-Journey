#include<stdio.h>
int main(){
    int ATM_No, PIN, AccNo;
    printf("Enter account number: ");
    scanf("%d", &AccNo);
    if (AccNo == 2222) {                     // 1st IF
        printf("Enter ATM number: ");
        scanf("%d", &ATM_No);
        if (ATM_No == 1234) {               // Nested IF
            printf("Enter PIN: ");
            scanf("%d", &PIN);
            if (PIN == 4321) {              // Nested inside nested
                printf("Login successful ?");
            } 
            else {
                printf("Wrong PIN ?");
            }
        } 
        else {
            printf("Invalid ATM number ?");
        }
    } 
    else {
        printf("Invalid Account Number ?");
    }
    return 0;
}

