/* Q84: Convert a lowercase string to uppercase without using built-in functions. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z')s[i]-=32;printf("%s",s);return 0;}
