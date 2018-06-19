/*Display the consecutive odd numbers within n and get their sum */

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d=0;
    a=1;
    printf("\nEnter the nth value: ");
    scanf("%d",&b);
    printf("\nThe odd number series within %d are:\n",b);
    for(int i=1;i<=b;i++)
    {
        if (a%2==1)
        {
            printf("%d ",a);
            ++d;
        }
        ++a;
    }
    printf("\n\n");
    c=d*d;
    printf("\nThe sum of even number series within %d is: %d\n",b,c);
}
