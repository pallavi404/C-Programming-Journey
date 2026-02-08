#include<stdio.h>

int main(){
    int no;
    printf("Enter total minutes: ");
    scanf("%d", &no);

    int hour = no / 60;
    int minute = no % 60;
    int sec = 0;

    printf("%d:%d:%d", hour, minute, sec);

    return 0;
}

