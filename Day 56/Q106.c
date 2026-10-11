/* Q106: For each array element, print the nearest greater element on its right; use brute force and -1 if none. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++){int ans=-1;for(int j=i+1;j<n;j++)if(a[j]>a[i]){ans=a[j];break;}printf("%d%s",ans,i==n-1?"":", \ ");}return 0;}
