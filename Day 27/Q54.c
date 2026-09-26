/*
Q54: Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *

Sample Test Cases:
Input 1:

Output 1:
Pattern with layers of stars as shown.
*/

#include <stdio.h>

int main()
{
    int i, j;
    int maxStars = 7;

    // Upper pyramid including center row
    for (i = 1; i <= maxStars; i += 2)
    {
        for (j = 0; j < (maxStars - i) / 2; j++)
        {
            printf( );
        }
        for (j = 0; j < i; j++)
        {
            printf( *);
        }
        printf(\n);
    }

    // Lower inverted pyramid
    for (i = maxStars - 2; i >= 1; i -= 2)
    {
        for (j = 0; j < (maxStars - i) / 2; j++)
        {
            printf( );
        }
        for (j = 0; j < i; j++)
        {
            printf( *);
        }
        printf(\n);
    }

    return 0;
}
