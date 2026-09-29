/* Q87: Count spaces, digits, and special characters in a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];int sp=0,d=0,x=0;fgets(s,sizeof s,stdin);for(int i=0;s[i]&&s[i]!='\n';i++){if(s[i]==' ')sp++;else if(isdigit((unsigned char)s[i]))d++;else if(!isalpha((unsigned char)s[i]))x++;}printf("Spaces=%d, Digits=%d, Special=%d",sp,d,x);return 0;}
