#include <stdio.h>
#include <stdlib.h>

int main()
{
    int b,e;
    printf("Please enter base and exponent\n");
    scanf("%d",&b);
    scanf("%d",&e);
    int ans=1;

    for(int i=0;i<abs(e);i++){

        ans=ans*b;


    }
    if (e<0)
    {

        printf("%f\n",1/(float)ans);

    }
    else{
        printf("%d \n",ans);
    }
    return 0;
}
