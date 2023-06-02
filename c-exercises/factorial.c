// Find N! using for loop (N! = 1*2*3*4...N)

#include <stdio.h>

int main(){
    int n,f,i;

    printf("Enter n");
    scanf("%d",&n);

    f=1;
    for(i=1;i<=n;i++){
        f *= i;
    }

    //alternative
    // i=1;
    // while (i<=n)
    // {
    //   f *= i;
    //   i++;
    // }

        printf("factor n is %d\n",f);
    return 0;
}