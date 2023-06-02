// Print numbers from 1...b

#include <stdio.h>

int main(){
    int a, b;

    printf("Enter b value:");
    scanf("%d", &b);

    a = 1;
    // if( a <=b){
    //     printf("%d\n", a);
    //     a= a+1;
    // }
 while( a <=b){
    printf("%d\n", a);
    a= a+1;
}

return 0;
}