/* Q91: Remove all vowels from a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++){char x=tolower((unsigned char)s[i]);if(!strchr("aeiou",x))putchar(s[i]);}return 0;}
