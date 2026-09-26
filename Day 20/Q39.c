/*
Q39: Write a program to find the product of odd digits of a number.

Sample Test Cases:
Input 1:
12345
Output 1:
15 (1*3*5)

Input 2:
2468
Output 2:
1 (no odd digits, assume 1)
*/

#include <stdio.h>

int main()
{
    long long n;
    long long prod = 1;
    int digit, hasOdd = 0;

    scanf(%lld, &n);

    if (n < 0)
        n = -n;

    while (n > 0)
    {
        digit = n % 10;
        if (digit % 2 != 0)
        {
            prod *= digit;
            hasOdd = 1;
        }
        n /= 10;
    }

    if (hasOdd)
        printf(%lld\n, prod);
    else
        printf(1\n);

    return 0;
}
