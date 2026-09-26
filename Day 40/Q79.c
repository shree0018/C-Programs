/*
Q79: Perform diagonal traversal of a matrix.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 9
Output 1:
1 2 4 7 5 3 6 8 9
*/

#include <stdio.h>

int main()
{
 int m, n, i, j;

 scanf(%d %d, &m, &n);
 int mat[m][n];

 for (i = 0; i < m; i++)
 {
 for (j = 0; j < n; j++)
 {
 scanf(%d, &mat[i][j]);
 }
 }

 int row = 0, col = 0;
 int up = 1;
 int count = 0;
 int total = m * n;

 while (count < total)
 {
 printf(%d%s, mat[row][col], (count == total - 1) ? \n :  );
 count++;

 if (up)
 {
 if (col == n - 1)
 {
 row++;
 up = 0;
 }
 else if (row == 0)
 {
 col++;
 up = 0;
 }
 else
 {
 row--;
 col++;
 }
 }
 else
 {
 if (row == m - 1)
 {
 col++;
 up = 1;
 }
 else if (col == 0)
 {
 row++;
 up = 1;
 }
 else
 {
 row++;
 col--;
 }
 }
 }

 return 0;
}
