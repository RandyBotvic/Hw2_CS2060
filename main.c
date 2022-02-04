#include <stdio.h>




int main (void)
{

    int startNumber;
    int endNumber;
    int sumOfOdds;

    startNumber=0;
    endNumber=0;
    sumOfOdds=0;

    printf( "%s", "Please enter starting number: ");
    scanf("%d", &startNumber);

    printf( "%s", "Please enter ending number: ");
    scanf( "%d", &endNumber);



    for (int i=startNumber; i<=endNumber; i++)
    {
        if(i%2==1)
        {
            sumOfOdds += i;
        }
    }

    printf( "This is the sum of all the 0dd Numbers:  %d", sumOfOdds);
    // Start of methods used.
};
