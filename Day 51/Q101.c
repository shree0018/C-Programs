/* Q101: Write a Program to take a sorted array and an integer target as inputs. Print the first and last occurrence indices of target, or -1 -1 if absent. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){int n,t,a[1000];scanf("%d",&n);for(int i=0;i<n;i++)scanf("%d",&a[i]);scanf("%d",&t);int f=-1,l=-1;for(int i=0;i<n;i++)if(a[i]==t){if(f<0)f=i;l=i;}printf("%d %d",f,l);return 0;}
