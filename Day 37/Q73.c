/*
Q73: Find the sum of each row of a matrix and store it in an array.

Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
6 15
*/

#include <stdio.h>

int main()
{
 int r, c, i, j, val;

 scanf(%d %d, &r, &c);
 int rowSums[r];

 for (i = 0; i < r; i++)
 {
 rowSums[i] = 0;
 for (j = 0; j < c; j++)
 {
 scanf(%d, &val);
 rowSums[i] += val;
 }
 }

 for (i = 0; i < r; i++)
 {
 printf(%d%s, rowSums[i], (i == r - 1) ? \n :  );
 }

 return 0;
}
