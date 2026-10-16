/* Q111: Take an integer array and k; print first negative integer in each window of size k, or 0. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,k,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&k);for(int i=0;i+k<=n;i++){int x=0;for(int j=i;j<i+k;j++)if(a[j]<0){x=a[j];break;}printf("%d%s",x,i+k==n?"":" \ ");}return 0;}
