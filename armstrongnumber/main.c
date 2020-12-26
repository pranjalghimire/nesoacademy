#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    printf("Please enter a number\n");
    scanf("%d",&num);
    int ans=num;
    int count=0;

    while(ans!=0){
        count+=1;
        ans=ans/10;
    }
    ans=num;
    int mul=1;
    int finalans=0;
    int cnt=count;
    while(ans!=0){
        int rem=ans%10;
        while(cnt!=0){
            mul=mul*rem;
            cnt--;
        }
        finalans=mul+finalans;
        cnt=count;
        ans=ans/10;
        mul=1;

    }

    if (finalans==num){
        printf("The armstrong number is %d",finalans);
    }
    else{
        printf("The %d number is not a armstrong number and count is %d",finalans,count);
    }


    return 0;
}
