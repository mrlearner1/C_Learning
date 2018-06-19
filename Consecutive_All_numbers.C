/*Display all numbers upto n and their series sum*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c;
    a=1;
    printf("\nEnter the nth value: ");
    scanf("%d",&b);
    printf("\nThe even number series within %d are:\n",b);
    for(int i=1;i<=b;i++)
    {
        printf("%d ",a);
        ++a;
    }
    printf("\n\n");
    c=(b*(b+1))/2;
    printf("\nThe sum of even number series within %d is: %d\n",b,c);
}
