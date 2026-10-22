/* Q117: Take two sorted arrays and merge them into one sorted array. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int m,n,a[1000],b[1000];scanf("%d",&m);for(int i=0;i<m;i++)scanf("%d",&a[i]);scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&b[i]);int i=0,j=0;while(i<m||j<n){int x;if(j>=n||(i<m&&a[i]<=b[j]))x=a[i++];else x=b[j++];printf("%d%s",x,(i==m&&j==n)?"":" \ ");}return 0;}
