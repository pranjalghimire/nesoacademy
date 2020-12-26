#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("please enter an number\n");
    scanf("%d",&n);
    int ans=n;
    int finalanswer=returnpal(n);
    if (finalanswer==ans){
     printf("This number %d is a palindrome",finalanswer);
    }
    else{
     printf("This number %d is not a palindrome",finalanswer);
    }
    return 0;
}

int returnpal(int n){
    int ans=0;

    while(n!=0){
    int rem=n%10;
    ans=ans*10+rem;
    n=n/10;
    }

    return ans;
}
