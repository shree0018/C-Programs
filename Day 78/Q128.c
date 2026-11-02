/* Q128: Read a text file and count vowels and consonants, ignoring digits and special characters. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char fn[100];scanf("%99s",fn);FILE*f=fopen(fn,"r");if(!f)return 1;int c,v=0,co=0;while((c=fgetc(f))!=EOF)if(isalpha(c)){c=tolower(c);if(strchr("aeiou",c))v++;else co++;}fclose(f);printf("Vowels: %d\nConsonants: %d",v,co);return 0;}
