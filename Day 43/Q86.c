/* Q86: Check if a string is a palindrome. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);s[strcspn(s,"\n")]=0;int i=0,j=strlen(s)-1,ok=1;while(i<j)if(s[i++]!=s[j--])ok=0;printf(ok?"Palindrome":"Not palindrome");return 0;}
