#include<stdio.h>

void main()
{
    int n;
    long int fact;  
    scanf("%d", &n);

    fact = 1;
    int i = n;

    while (i > 0) {
        fact = fact * i;
        i--;
    }

    printf("The Factorial of %d is : %ld", n, fact);
}

