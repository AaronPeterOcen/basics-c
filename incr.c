#include <stdio.h>

int main(){
    int a= 10;
    // a++;
    int b;
    //  b=++a;
    b=a++;
    printf("a is %d\n b is %d\n ",a,b);
    return 0;
}