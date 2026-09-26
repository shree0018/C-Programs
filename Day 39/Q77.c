/*
Q77: Check if the elements on the diagonal of a matrix are distinct.

Sample Test Cases:
Input 1:
3 3
1 2 3
4 5 6
7 8 1
Output 1:
False

Input 2:
3 3
1 2 3
4 5 6
7 8 9
Output 2:
True
*/

#include <stdio.h>

int main()
{
 int r, c, i, j;

 scanf(%d %d, &r, &c);
 int mat[r][c];

 for (i = 0; i < r; i++)
 {
 for (j = 0; j < c; j++)
 {
 scanf(%d, &mat[i][j]);
 }
 }

 int diagSize = (r < c) ? r : c;
 int distinct = 1;

 for (i = 0; i < diagSize; i++)
 {
 for (j = i + 1; j < diagSize; j++)
 {
 if (mat[i][i] == mat[j][j])
 {
 distinct = 0;
 break;
 }
 }
 if (!distinct)
 break;
 }

 if (distinct)
 printf(True\n);
 else
 printf(False\n);

 return 0;
}
