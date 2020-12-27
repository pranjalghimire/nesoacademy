#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,sum;
    printf("Please enter two numbers\n");
    scanf("%d %d",&a,&b);

    while(b!=0){
        sum=a^b;
        int carry=(a&b)<<1;
         a=sum;
         b=carry;
    }
    printf("the sum of the two numbers is %d",sum);
    return 0;
}
