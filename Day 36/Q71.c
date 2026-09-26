/*
Q71: Read and print a matrix.

Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4
*/

#include <stdio.h>

int main()
{
    int r, c, i, j;

    scanf( %d %d, &r, &c);
    int mat[r][c];

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf(%d, &mat[i][j]);
        }
    }

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf(%d%s, mat[i][j], (j == c - 1) ?  :  );
 }
 printf( \n);
 }

 return 0;
}
