/* Q126: Ask for a filename; if it exists, read and display content, otherwise print an error. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char fn[100],line[500];scanf("%99s",fn);FILE*f=fopen(fn,"r");if(!f){printf("Error: File does not exist!");return 0;}printf("File opened successfully.\n");while(fgets(line,sizeof line,f))printf("%s",line);fclose(f);return 0;}
