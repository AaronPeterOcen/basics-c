#include <stdio.h>

int main(){
    int a,b;

    printf("Enter a ");
    scanf("%d", &a);

     printf("Enter b ");
    scanf("%d", &b);

    if (!(a <= b))
        printf("a is bigger\n");
    else
        printf("b is bigger\n");

    return 0;
}