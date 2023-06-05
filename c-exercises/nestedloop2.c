// nested loops 
// 1
// 22
// 333
// 4444
// 5555

#include <stdio.h>

int main(){
    int row, col, n;

    printf("Enter the value of n:");
    scanf("%d", &n);

    row =1;
    while (row <= n){
        col =1;
        while (col <= row){
            printf("%d", row);  //the trick is just printing the row  value
            col++;
    }
    printf("\n");
    row++;
    }
return 0;

}