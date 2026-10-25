/* Q120: Write a program to take a string input. Change it to sentence case. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);int nw=1;for(int i=0;s[i];i++){if(isalpha((unsigned char)s[i])&&nw)s[i]=toupper(s[i]);nw=(s[i]==' '||s[i]=='\t'||s[i]=='\n');}printf("%s",s);return 0;}
