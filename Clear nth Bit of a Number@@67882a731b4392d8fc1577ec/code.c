#include <stdio.h>
int clear_nth_bit(int num, int n){
    return num & ~(1<<n):

}
int main(){
    int num, n;

    scamf("%d %d", &num, &n);

    printf("%d\n", clear_nth_bit(num, n));
    return 0;
}