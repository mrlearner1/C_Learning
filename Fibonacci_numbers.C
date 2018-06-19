/*Get the set of first n numbers from Fibonacci series*/

#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,c,d;
    a=0;
    b=1;
    printf("\nEnter the nth value: ");
    scanf("%d",&c);
    printf("\nThe Fibonacci series for first %d numbers are:\n",c);
    for(int i=1;i<=c;i++)
    {
        printf("%d ",a);
        d=a+b;
        a=b;
        b=d;
    }
    printf("\n\n");
    printf("\nThe sum of first %d numbers in Fibonacci series is: %d\n",c,--d);
}
