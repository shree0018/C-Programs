/*
Q64: Find the digit that occurs the most times in an integer number.

Sample Test Cases:
Input 1:
112233
Output 1:
1

Input 2:
887799
Output 2:
7
*/

#include <stdio.h>

int main()
{
    long long n;
    int freq[10] = {0};

    scanf( %lld, &n);

    if (n < 0)
        n = -n;

    if (n == 0)
    {
        printf(0\n);
        return 0;
    }

    while (n > 0)
    {
        int d = n % 10;
        freq[d]++;
        n /= 10;
    }

    int maxCount = -1, mostFreqDigit = -1;
    for (int i = 0; i <= 9; i++)
    {
        if (freq[i] > maxCount)
        {
            maxCount = freq[i];
            mostFreqDigit = i;
        }
    }

    printf(%d\n, mostFreqDigit);

    return 0;
}
