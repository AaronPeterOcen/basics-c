//without curly brackets
// if statement usually reads the first printf statement and if it is false according to the condition it goes with the second one
// The first printf statement is the only statement that is controlled by the if condition 
     

#include <stdio.h>

int main(){
    int weekday;

    printf("Enter weekday 0 - sunday, 1 - monday ..");
    scanf("%d", &weekday);

    if (weekday ==0 || weekday == 6){
        printf("Enjoy ");
        printf("weekend");}
    return 0;
}