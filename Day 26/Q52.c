/*
Q52: Write a program to print the following pattern:

*

*
*
*

*
*
*
*
*

*
*
*

*

Sample Test Cases:
Input 1:

Output 1:
Pattern with stars spaced irregularly as shown.
*/

#include <stdio.h>

int main()
{
    int pattern[] = {1, 3, 5, 3, 1};
    int n = sizeof(pattern) / sizeof(pattern[0]);
    int i, j;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < pattern[i]; j++)
        {
            printf(*\n);
        }
        if (i < n - 1)
        {
            printf(\n);
        }
    }

    return 0;
}
