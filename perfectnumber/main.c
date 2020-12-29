#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int a,sum;
    while(1){
    printf("Please enter a number\n",a);
    scanf("%d",&a);
    for (int i=1;i<(a);i++){
        if (a%i==0){
            sum=sum+i;
        }

    }
    if (sum==a) printf("perfect number sum %d is equal to a %d",sum,a);
    else     printf("not a perfect number sum %d is not equal to a %d",sum,a);
    }
    return 0;
}
