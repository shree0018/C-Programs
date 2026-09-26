/*
Q58: Find the maximum and minimum element in an array.

Sample Test Cases:
Input 1:
5
2 9 1 4 7
Output 1:
Max=9, Min=1

Input 2:
3
10 10 10
Output 2:
Max=10, Min=10
*/

#include <stdio.h>

int main()
{
    int n, i, val;
    int max, min;

    scanf(%d, &n);
    if (n <= 0)
        return 0;

    scanf(%d, &val);
    max = min = val;

    for (i = 1; i < n; i++)
    {
        scanf(%d, &val);
        if (val > max)
            max = val;
        if (val < min)
            min = val;
    }

    printf(Max=%d Min=%d\n, max, min);

    return 0;
}
