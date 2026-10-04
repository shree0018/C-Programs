/* Q98: Print initials of a name with the surname displayed in full. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(){char s[500];fgets(s,sizeof s,stdin);s[strcspn(s,"\n")]=0;char *w[50];int n=0;for(char *p=strtok(s," \ ");p;p=strtok(NULL," "))w[n++]=p;for(int i=0;i<n-1;i++)printf("%c.",toupper(w[i][0]));if(n)printf(" %s",w[n-1]);return 0;}
