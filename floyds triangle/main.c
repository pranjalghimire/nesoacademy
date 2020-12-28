#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("Please enter the number of rows\n");
    scanf("%d",&a);
    int count=1;
    for(int i=1;i<=a;i++){
        printf("\n");
        for(int j=1;j<=i;j++){
            printf("%d ",count);
            count++;

        }
    }
    return 0;
}
