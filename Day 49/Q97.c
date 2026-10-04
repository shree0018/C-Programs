/* Q97: Print the initials of a name. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);if(isalpha((unsigned char)s[0]))printf("%c.",toupper(s[0]));for(int i=1;s[i];i++)if(s[i-1]==' '&&isalpha((unsigned char)s[i]))printf("%c.",toupper(s[i]));return 0;}
