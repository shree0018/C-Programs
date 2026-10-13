/* Q108: For an integer array, print product of all elements except the current element for every index. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++){long long p=1;for(int j=0;j<n;j++)if(i!=j)p*=a[j];printf("%lld%s",p,i==n-1?"":" \ ");}return 0;}
