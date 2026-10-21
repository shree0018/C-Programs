/* Q116: Take a positive integer array and target; print two distinct indices whose values sum to target, or -1 -1. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,t,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&t);for(int i=0;i<n;i++)for(int j=i+1;j<n;j++)if(a[i]+a[j]==t){printf("%d %d",i,j);return 0;}printf("-1 -1");return 0;}
