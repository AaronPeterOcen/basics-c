//check if a number is prime or not then print it is prime or not

#include <stdio.h>

int main(){
    int a, b, count;

    printf("Enter a: ");
    scanf("%d", &a);

    count = 0;
    b=1;
    while ( b<= a){
        if(a % b == 0){         //how we can check for the prime number using modulus to see if it is divisible by any number
            count++;    
        }
        b++;
    }

    if(count == 2){
        printf("%d is Prime Number \n", a);
    } else {
        printf("%d is not Prime Number \n", a);
    }

    return 0;
        
}