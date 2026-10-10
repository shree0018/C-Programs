/* Q105: Take an integer array and print the majority element appearing strictly more than n/2 times, or -1. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);for(int i=0;i<n;i++){int c=0;for(int j=0;j<n;j++)if(a[j]==a[i])c++;if(c>n/2){printf("%d",a[i]);return 0;}}printf("-1");return 0;}
