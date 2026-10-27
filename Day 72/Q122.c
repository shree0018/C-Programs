/* Q122: Open an existing file such as info.txt and read/print all lines using fgets() until EOF. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){FILE*f=fopen("info.txt","r");char line[500];if(!f){printf("Error: File does not exist!");return 0;}while(fgets(line,sizeof line,f))printf("%s",line);fclose(f);return 0;}
