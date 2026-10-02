/* Q94: Find the longest word in a sentence. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500],best[500]="";fgets(s,sizeof s,stdin);char *p=strtok(s," \n");while(p){if(strlen(p)>strlen(best))strcpy(best,p);p=strtok(NULL," \n");}printf("%s",best);return 0;}
