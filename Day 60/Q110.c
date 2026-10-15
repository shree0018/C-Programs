/* Q110: Take an integer array and k; print maximum element in each subarray/window of size k. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,k,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);for(int i=0;i+k<=n;i++){int m=a[i];for(int j=i+1;j<i+k;j++)if(a[j]>m)m=a[j];printf("%d%s",m,i+k==n?"":" \ ");}return 0;}
