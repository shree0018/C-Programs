/*
Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
*

Sample Test Cases:
Input 1:

Output 1:
*
***
*****
*******
*********
*******
*****
***
*
*/

#include <stdio.h>

int main()
{
    int i, j;

    // Upper half and middle
    for (i = 1; i <= 9; i += 2)
    {
        for (j = 0; j < i; j++)
        {
            printf(*);
        }
        printf(\n);
    }

    // Lower half
    for (i = 7; i >= 1; i -= 2)
    {
        for (j = 0; j < i; j++)
        {
            printf(*);
        }
        printf(\n);
    }

    return 0;
}
