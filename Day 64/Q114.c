/* Q114: Take a string and print the length of the longest substring without repeating characters. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[1000];scanf("%999s",s);int best=0;for(int i=0;s[i];i++){int seen[256]={0};for(int j=i;s[j];j++){unsigned char c=s[j];if(seen[c])break;seen[c]=1;if(j-i+1>best)best=j-i+1;}}printf("%d",best);return 0;}
