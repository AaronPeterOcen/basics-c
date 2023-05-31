#include <stdio.h>

int main(){
    int o, t ;
    double p;

      printf("Enter obtained marks  ");
    scanf("%d",&o);

    printf("Enter total marks  ");
    scanf("%d",&t);

    p = o * 100.0 / t ;     //expression evaluation

    printf("The percentage is %f\n",p);
    return 0;
}