#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    printf("Please enter a positive number\n");
    int n;
    int count=0;
    scanf("%d",&n);
    int val1=ceil(sqrt(n));
    int val2=n;

    for(int i=2;i<=val1;i++){
        if(val2%i==0) count=1;
    }
    if ((count==0 && val2!=1)|| val2==2 || val2==3)
        printf("%d is a prime number",val2);
    else
        printf("%d is not a prime number",val2);

    return 0;
}


/*If n is not prime then there are two positive integers a and b such that:
n = ab
If a = b then n =  a² and a is the root
If a != b then either a <= root(n) or b <= root(n)
(here asume root is the ceil of the sqrt)
because if not both are greater than the roor and then the product is greater than que root quare which is greater or equal to n.



For every non prime there is an interger product that expresses it, for example:

6=2x3
20=2x10
9=3x3
27=3x9

Every divisor comes in pairs since you need two numbers to make a product,
if you see in the examples above, (2,3) (2,10) (3,3)(3,9) at least one is samller than the square root and
if you have one you have the other by dividing

*/
