#include <stdio.h>
int main(){
    int num, n;
    scanf("%d %d", &num, &n);
    int bitvalue = (num>>n)&1;
    printf("%d\n", bitvalue);
    return 0;
}
