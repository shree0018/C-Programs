/* Q124: Take source and destination filenames and copy content using fgetc() and fputc(). */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char a[100],b[100];scanf("%99s%99s",a,b);FILE*in=fopen(a,"r"),*out=fopen(b,"w");if(!in||!out)return 1;int c;while((c=fgetc(in))!=EOF)fputc(c,out);fclose(in);fclose(out);printf("File copied successfully to %s",b);return 0;}
