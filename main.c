// Fig. 3.10: fig03_10.c
// Analysis of examination results 
#include <stdio.h>

// function main begins program execution 
int main( void )
{
    // initialize variables in definitions
    unsigned int passes = 0; // number of passes
    unsigned int failures = 0; // number of failures
    unsigned int student = 1; // student counter
    int result; // one exam result

    // process 10 students using counter-controlled loop
    do
    {
        // prompt user for input and obtain value from user
        printf( "%s", "Enter result ( 1=pass,2=fail ): " );
        scanf( "%d", &result );
        int returnValue=scanf( "%d", &result );
        while ((getchar())!='\n');

        // if result 1, increment passes
        if ( returnValue == 1 && result == 1)
        {
            passes = passes + 1;
            student = student + 1;
        } // end if
        else if (returnValue==1 && result == 2)
        { // otherwise, increment failures
            failures = failures + 1;
            student = student + 1;
        } // end else
        else if (returnValue != 1)
        {
            puts("Please only enter prompted values!!");
        }
         // increment student counter
    }while ( student <= 10 );// end while

    // termination phase; display number of passes and failures
    printf( "Passed %u\n", passes );
    printf( "Failed %u\n", failures );

    // if more than eight students passed, print "Bonus to instructor!"
    if ( passes > 8 )
    {
        puts( "Bonus to instructor!" );
    } // end if
} // end function main 




/**************************************************************************
 * (C) Copyright 1992-2013 by Deitel & Associates, Inc. and               *
 * Pearson Education, Inc. All Rights Reserved.                           *
 *                                                                        *
 * DISCLAIMER: The authors and publisher of this book have used their     *
 * best efforts in preparing the book. These efforts include the          *
 * development, research, and testing of the theories and programs        *
 * to determine their effectiveness. The authors and publisher make       *
 * no warranty of any kind, expressed or implied, with regard to these    *
 * programs or to the documentation contained in these books. The authors *
 * and publisher shall not be liable in any event for incidental or       *
 * consequential damages in connection with, or arising out of, the       *
 * furnishing, performance, or use of these programs.                     *
 *************************************************************************/
