#include <stdio.h>
void main()
{
    int i,sum=0;

    printf("\nThe odd numbers are :");
    for(i=1;i<=8;i++)
    {
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\nThe Sum of odd Natural Number 1 through 15 : %d \n",sum);
}