#include <stdio.h>

int main(){
    int a,b,c,d,e,f,g;
    printf("Enter value of a ");
    scanf("%d",&a);    //scanf function allows the user to input vals from the keyboard
                        //The & sign helps to map the input value to the declared value in money
    printf("Enter value of b ");
    scanf("%d",&b);
    c=a+b;
    d=a-b;
    e=a*b;
    f=a/b;
    g=a%b;
    printf("value of c is %d\n",c); // %d replaces the integer values / prints
     printf("value of d is %d\n",d);
     printf("value of e is %d\n",e); 
     printf("value of f is %d\n",f);
     printf("value of g is %d\n",g);
    return 0;
}