#include <stdio.h>
int main(){
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input\n");

    }

    if ((a > 0 && b < 0) || (a == 0 && b ==0)){
        printf("True\n");

    } else {
        printf("False\n");

    }
    return 0;

}