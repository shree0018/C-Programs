/* Q100: Print all sub-strings of a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[200];scanf("%199s",s);int n=strlen(s),first=1;for(int i=0;i<n;i++)for(int j=i;j<n;j++){if(!first)printf(",");first=0;for(int k=i;k<=j;k++)putchar(s[k]);}return 0;}
