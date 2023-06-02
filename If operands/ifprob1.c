// Accept qnty and rate per unit, calculate the amount
// apply 10% discount if amount exceeds 500 and display the net price 
// %f to read a float
// %lf to read a double


#include <stdio.h>

int main(){
    double quantity, rate;
    double amount;
    double discount;

    printf("Enter the quantity of products");
    scanf("%lf", &quantity);

    printf("Enter the rate per unit of product");
    scanf("%lf", &rate);

    amount = quantity * rate;
    // discount = amount*0.9;

    if (amount > 500)
        amount= amount*0.9;
        printf("the amount is %lf \n", amount);  
    // -> Enjoy weekend
    // else   -> not needed
    //     printf("the amount is %lf \n", amount);
    return 0;
}