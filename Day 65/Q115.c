/* Q115: Take two lowercase strings and print Anagram if they contain the same character frequencies, otherwise Not Anagram. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char a[500],b[500];int f[256]={0};scanf("%499s%499s",a,b);if(strlen(a)!=strlen(b)){printf("Not Anagram");return 0;}for(int i=0;a[i];i++){f[(unsigned char)a[i]]++;f[(unsigned char)b[i]]--;}for(int i=0;i<256;i++)if(f[i]){printf("Not Anagram");return 0;}printf("Anagram");return 0;}
