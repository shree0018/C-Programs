/* Q133: Create an enum for months and print how many days each month has. */
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

enum Month{JAN,FEB,MAR,APR,MAY,JUN,JUL,AUG,SEP,OCT,NOV,DEC};int main(){char s[10];scanf("%9s",s);char*n[]={"JAN","FEB","MAR","APR","MAY","JUN","JUL","AUG","SEP","OCT","NOV","DEC"};int m=-1;for(int i=0;i<12;i++)if(!strcmp(s,n[i]))m=i;if(m==FEB)printf("28 or 29 days");else if(m==APR||m==JUN||m==SEP||m==NOV)printf("30 days");else if(m>=0)printf("31 days");return 0;}
