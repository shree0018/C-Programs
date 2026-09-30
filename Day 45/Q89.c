/* Q89: Count frequency of a given character in a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500],ch;fgets(s,sizeof s,stdin);scanf(" %c",&ch);int c=0;for(int i=0;s[i];i++)if(s[i]==ch)c++;printf("%d",c);return 0;}
