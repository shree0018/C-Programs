/*
Q41: Write a program to swap the first and last digit of a number.

Sample Test Cases:
Input 1:
1234
Output 1:
4231

Input 2:
1001
Output 2:
1001
*/

#include <stdio.h>
#include <math.h>

int main()
{
    int n, first, last, digits = 0, temp;

    scanf(%d, &n);

    last = n % 10;
    temp = n;

    while (temp >= 10)
    {
        temp /= 10;
        digits++;
    }
    first = temp;

    if (digits == 0)
    {
        printf(%d\n, n);
        return 0;
    }

    int powVal = (int)pow(10, digits);
    int middle = (n % powVal) / 10;

    int swapped = last * powVal + middle * 10 + first;

    printf(%d\n, swapped);

    return 0;
}
