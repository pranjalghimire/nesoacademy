#include <stdio.h>

int main(){
int n;
printf("please enter a number");
scanf("%d",&n);
printf("%d",makepalindrome(n));
}

int makepalindrome(int n){
n=n/10;

return n;
}
