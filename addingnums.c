#include <stdio.h>

int main(){
    int n,m,o;
    printf("Enter value of m ");
    scanf("%d",&m);    //scanf function allows the user to input vals from the keyboard
                        //The & sign helps to map the input value to the declared value in money
    printf("Enter value of n ");
    scanf("%d",&n);
    o=m+n;
    printf("value of o is %d\n",o); // %d replaces the integer values / prints

    return 0;
}