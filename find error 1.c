// This program demonstrates variable shadowing in C.
// Using 'main' as a variable name is allowed but not recommended.

#include<stdio.h>
int main(){
    int main = 5;
    printf("%d", main);
    return 0;
}

