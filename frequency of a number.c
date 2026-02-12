#include<stdio.h>
int main(){
    int n, temp, r, prev = -1, count = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    temp = n;
    for(; temp > 0; temp = temp / 10){
        r = temp % 10;

        if(r == prev){
            count++;
        }
        else{
            if(prev != -1){
                printf("%d occurs %d times\n", prev, count);
            }
            prev = r;
            count = 1;
        }
    }
    printf("%d occurs %d times\n", prev, count);
}

