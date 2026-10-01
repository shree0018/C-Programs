/* Q92: Find the first repeating lowercase alphabet in a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];int f[26]={0};fgets(s,sizeof s,stdin);for(int i=0;s[i];i++)if(s[i]>='a'&&s[i]<='z'){int k=s[i]-'a';if(f[k]){putchar(s[i]);return 0;}f[k]++;}printf("-1");return 0;}
