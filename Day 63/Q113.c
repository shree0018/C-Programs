/* Q113: Take an integer array and k; print the kth smallest element. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int cmp(const void*a,const void*b){int x=*(const int*)a,y=*(const int*)b;return (x>y)-(x<y);}int main(){int n,k,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);qsort(a,n,sizeof(int),cmp);if(k>=1&&k<=n)printf("%d",a[k-1]);return 0;}
