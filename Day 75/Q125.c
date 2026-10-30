/* Q125: Open an existing file in append mode and append a new line of text without overwriting existing content. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char fn[100],line[500];scanf("%99s",fn);getchar();fgets(line,sizeof line,stdin);FILE*f=fopen(fn,"a");if(!f)return 1;fprintf(f,"%s",line);fclose(f);printf("File updated successfully with appended text.");return 0;}
