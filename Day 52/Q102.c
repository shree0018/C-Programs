/* Q102: Take a sorted array and integer x; print the first index of the smallest element greater than or equal to x, or -1. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,x,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&x);int ans=-1;for(int i=0;i<n;i++)if(a[i]>=x){ans=i;break;}printf("%d",ans);return 0;}
