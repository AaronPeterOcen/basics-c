#include <stdio.h>

int main(){
    int n,i, count, range;

    printf("Enter range: ");
    scanf("%d",&range);

    n=2;
    while(n <= range){

    count=0;
    i=1;

    while (i <= n)
    {
        if (n%i==0){
            count++;
        }
        i++;
    }
    

    if (count==2)
    {
       printf("%d is Prime \n", n);
    }
    n++;
    }
    return 0;
}