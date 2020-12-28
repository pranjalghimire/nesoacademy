#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a=0;
    int b=1;
    int n;
    int sum;
    printf("Please enter a number\n");
    scanf("%d",&n);

    for(int i=0;i<n;i++){
    printf("%d\n",a);
     sum=a+b;
     a=b;
     b=sum;
    }


    return 0;
}
