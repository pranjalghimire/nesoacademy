#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);

    int ans=findfact(n);
    if (ans==n) printf("The value %d is a strong number",ans);
    else printf("The value %d is not a strong number",ans);

    return 0;
}
int findfact(int n){
int rem,sum;
sum=0;
int n2=n;
while(n2!=0){
    rem=n2%10;
    int ans=1;
    for(int i=rem;i>1;i--){
        ans=ans*i;
    }
    sum=sum+ans;
    n2=n2/10;
}

return sum;
}
