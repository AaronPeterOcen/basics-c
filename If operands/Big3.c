#include <stdio.h>

int main(){
    int a,b,c;

    printf("Enter a ");
    scanf("%d", &a);

     printf("Enter b ");
    scanf("%d", &b);

     printf("Enter c ");
    scanf("%d", &c);

    if (a>b && a>c)
        printf("a is bigger\n");
    else if (b>c)
        printf("b is bigger\n");
    else if(c>b)
    printf("c is bigger\n");
    else
    if(a==b==c)
    printf("all equal \n");

    return 0;
}