#include <stdio.h>
int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    if (&a, &b != 2){
        printf("Invalid input\n")
        return 1;

    }
    if (a > 0 && b > 0) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    return 0;
}