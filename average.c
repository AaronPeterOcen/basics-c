#include <stdio.h>

int main(){
    int a,b,c,d;
    printf("Enter value of a ");
    scanf("%d",&a);    //scanf function allows the user to input vals from the keyboard
                     //The & sign helps to map the input value to the declared value in money
    printf("Enter value of b ");
    scanf("%d",&b);
     printf("Enter value of c ");
    scanf("%d",&c);
    d = (a + b + c) / 3;
     printf("The value of d is %d\n", d);
     return 0;
}