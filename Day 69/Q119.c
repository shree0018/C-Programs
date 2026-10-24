/* Q119: Take an integer array with one repeated element and print the repeated element. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,a[1000];scanf("%d",&n);for(int i=0;i<n;i++){scanf("%d",&a[i]);for(int j=0;j<i;j++)if(a[j]==a[i]){printf("%d",a[i]);return 0;}}return 0;}
