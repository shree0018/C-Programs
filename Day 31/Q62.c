/*
Q62: Reverse an array without taking extra space.

Sample Test Cases:
Input 1:
4
1 2 3 4
Output 1:
4 3 2 1
*/

#include <stdio.h>

int main()
{
    int n, i;

    scanf(%d, &n);
    int arr[n];

    for (i = 0; i < n; i++)
    {
        scanf(%d, &arr[i]);
    }

    int left = 0, right = n - 1;
    while (left < right)
    {
        int temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;
        left++;
        right--;
    }

    for (i = 0; i < n; i++)
    {
        printf(%d%s, arr[i], (i == n - 1) ? \n :  );
    }

    return 0;
}
