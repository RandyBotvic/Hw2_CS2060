#include <stdio.h>
void main()
{
    int i,sum=0;
    // Modified code off the interwebs to
    // get the hang of writing my first loops
    // just being honest ;/
    printf("\nThe odd numbers are :");
    for(i=1;i<=8;i++)
    {
        printf("%d ",2*i-1);
        sum+=2*i-1;
    }
    printf("\nThe Sum of odd Natural Number 1 through 15 : %d \n",sum);
}