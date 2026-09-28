/* Q85: Reverse a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);s[strcspn(s,"\n")]=0;for(int i=(int)strlen(s)-1;i>=0;i--)putchar(s[i]);return 0;}
