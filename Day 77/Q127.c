/* Q127: Read text from input.txt, convert lowercase letters to uppercase, and write result to output.txt. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){FILE*in=fopen("input.txt","r"),*out=fopen("output.txt","w");if(!in||!out)return 1;int c;while((c=fgetc(in))!=EOF)fputc(toupper((unsigned char)c),out);fclose(in);fclose(out);return 0;}
