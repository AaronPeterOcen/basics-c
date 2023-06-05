// sum of digits of the given number up to a single digit

#include <stdio.h>

int main(){
    int a,sum;

    printf("Enter a: ");
    scanf("%d", &a);

while(a>0){
    sum = 0;
    while(a>0){
        sum = sum + (a%10);
        a=a/10;

        }
            if (sum>9)
            {
            a=sum;
            }
}



printf("Sum of digits to the single digit  is %d\n", sum);
return 0;
}
