/* Q104: Take positive integer n and find pivot integer x such that sum 1..x equals sum x..n; print -1 if none. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){long long n;scanf("%lld",&n);long long total=n*(n+1)/2,left=0;for(long long x=1;x<=n;x++){left+=x;if(left==total-(x*(x-1)/2)){printf("%lld",x);return 0;}}printf("-1");return 0;}
