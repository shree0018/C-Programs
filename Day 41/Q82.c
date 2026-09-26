/* Q82: Print each character of a string on a new line. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500]; fgets(s,sizeof s,stdin); for(int i=0;s[i]&&s[i]!='\n';i++) printf("%c\n",s[i]); return 0;}
