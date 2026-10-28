/* Q123: Read a text file and count total characters, words, and lines. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char fn[100];scanf("%99s",fn);FILE*f=fopen(fn,"r");if(!f)return 1;int ch,chars=0,words=0,lines=0,in=0;while((ch=fgetc(f))!=EOF){chars++;if(ch=='\n')lines++;if(isspace(ch))in=0;else if(!in){words++;in=1;}}if(chars&&lines==0)lines=1;fclose(f);printf("Characters: %d\nWords: %d\nLines: %d",chars,words,lines);return 0;}
