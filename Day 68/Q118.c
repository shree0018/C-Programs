/* Q118: Take an array containing all integers from 0 to n except one; print the missing number. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,x;long long s=0;scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&x);s+=x;}long long total=(long long)n*(n+1)/2;printf("%lld",total-s);return 0;}
