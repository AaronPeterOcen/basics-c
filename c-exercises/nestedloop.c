// nested loops 
// 1
// 12
// 123
// 1234
// 12345

#include <stdio.h>

int main(){
    int row, col, n;

    printf("Enter the value of n:");
    scanf("%d", &n);

    row =1;
    while (row <= n){
        col =1;
        while (col <= row){
            printf("%d", col);
            col++;
    }
    printf("\n");
    row++;
    }
return 0;

}