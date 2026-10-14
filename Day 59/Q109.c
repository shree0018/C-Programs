/* Q109: Take an integer array and k; print maximum sum among all subarrays of size k. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,k,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);long long best=-9223372036854775807LL;for(int i=0;i+k<=n;i++){long long s=0;for(int j=i;j<i+k;j++)s+=a[j];if(s>best)best=s;}printf("%lld",best);return 0;}
