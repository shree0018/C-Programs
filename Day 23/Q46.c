/*
Q46: Write a program to print the following pattern:
*****
*****
*****
*****
*****

Sample Test Cases:
Input 1:

Output 1:
*****
*****
*****
*****
*****
*/

#include <stdio.h>

int main()
{
    int rows = 5, cols = 5;
    int i, j;

    for (i = 0; i < rows; i++)
    {
        for (j = 0; j < cols; j++)
        {
            printf(*);
        }
        printf(\n);
    }

    return 0;
}
