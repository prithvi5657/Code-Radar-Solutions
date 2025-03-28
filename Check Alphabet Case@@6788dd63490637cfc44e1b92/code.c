#include <stdio.h>
int main(){
    char ch;

    if(ch >= 'A' && ch <= 'Z'){
        printf("Uppercase\n");


    } elseif(ch >= 'a' && ch <= 'z'){
        printf("Lowercase\n");
    } else{
        printf("Not an alphabet\n");
        }
        return 0;

}