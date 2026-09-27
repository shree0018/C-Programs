/* Q83: Count vowels and consonants in a string. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500]; int v=0,c=0; fgets(s,sizeof s,stdin); for(int i=0;s[i];i++){char x=tolower((unsigned char)s[i]); if(isalpha(x)){if(strchr("aeiou",x))v++;else c++;}} printf("Vowels=%d, Consonants=%d",v,c);return 0;}
