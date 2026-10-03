/* Q96: Reverse each word in a sentence without changing the word order. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);int start=0,n=strlen(s);for(int i=0;i<=n;i++)if(s[i]==' '||s[i]=='\n'||s[i]==0){for(int j=i-1;j>=start;j--)putchar(s[j]);if(s[i]==' ')putchar(' ');start=i+1;}return 0;}
