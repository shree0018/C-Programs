/* Q93: Check if two strings are anagrams of each other. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char a[500],b[500];int f[256]={0};fgets(a,sizeof a,stdin);fgets(b,sizeof b,stdin);a[strcspn(a,"\n")]=0;b[strcspn(b,"\n")]=0;if(strlen(a)!=strlen(b)){printf("Not anagrams");return 0;}for(int i=0;a[i];i++){f[(unsigned char)a[i]]++;f[(unsigned char)b[i]]--;}for(int i=0;i<256;i++)if(f[i]){printf("Not anagrams");return 0;}printf("Anagrams");return 0;}
