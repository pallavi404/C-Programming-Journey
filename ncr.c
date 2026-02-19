#include<stdio.h>

int fact(int n){
    int i;
    int prod = 1;
    for(i = n; i >= 1; i--){
        prod *= i;
    }
    return prod;
}

int main(){
    int n, r;
    printf("enter n , r : ");
    scanf("%d%d", &n, &r);

    if(r > n){
        printf("Invalid input! r should be <= n");
    }
    else{
        printf("combination is : %d", fact(n) / (fact(r) * fact(n-r)));
    }
}

