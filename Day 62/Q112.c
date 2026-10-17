/* Q112: Find maximum sum of any contiguous subarray using Kadane's algorithm; if all negative print largest element. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);long long cur=a[0],best=a[0];for(int i=1;i<n;i++){cur=(cur+a[i]>a[i])?cur+a[i]:a[i];if(cur>best)best=cur;}printf("%lld",best);return 0;}
