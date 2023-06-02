//sum of digits of a number using while loop 

#include <stdio.h>

int main(){
    int a,sum,c;

    printf("Enter a: ");
    scanf("%d", &a);

    sum = 0;
while(a>0){
    sum = sum + (a%10);
    a=a/10;
}

printf("Sum of digits is %d\n", sum);
return 0;
}


//A while loop is used to calculate the sum of the digits of a. The loop continues as long as a is greater than 0.

// Inside the loop, the sum is updated by adding the remainder of a divided by 10 (a % 10). This extracts the last digit of a, which is then added to the current value of sum.

// After adding the digit to the sum, the value of a is updated by dividing it by 10 (a = a / 10). This removes the last digit from a and updates its value for the next iteration.

// Once the loop finishes, the printf function is used to display the final sum of the digits calculated in the variable sum.