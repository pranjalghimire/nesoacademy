#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Please enter a binary number!\n");
    scanf("%d",&a);
    int pow=1;
    int ans=0;
    while(a!=0){
        int rem=a%10;
        ans=ans+rem*pow;
        pow=pow*2;
        a=a/10;
    }

    return ans;
}
